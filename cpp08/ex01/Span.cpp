/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:39:45 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 17:26:03 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : capacity(N)
{
    std::cout << "Parametrized constructor called" << std::endl;
}

Span::Span(const Span& other) : _myvector(other._myvector)
{
    std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
    (void)other;
    // std::cout << "Copy assignment called" << std::endl;
    return *this;
}

void    Span::addNumber(int number)
{
    if (_myvector.size() >= capacity)
    {
        std::cout << "Capacity:" << capacity << std::endl;
        std::cout << "size vector:" << _myvector.size() << std::endl;        
        throw std::string("Span capacity exceeded");
    }
    _myvector.push_back(number);
}

int    Span::shortestSpan()
{
    int shortSpan(INT_MAX);
    if (_myvector.size() <= 1)
        throw std::runtime_error("No span can be found !");
    else
    {
        for (std::vector<int>::iterator it = _myvector.begin(); it != _myvector.end(); it++)
        {
            for (std::vector<int>::iterator s_it = _myvector.begin(); s_it != _myvector.end(); s_it++)
            {
                if (shortSpan > abs(*s_it - *it) && (*s_it - *it) != 0)
                    shortSpan = abs(*s_it - *it);
            }
        }
    }
    return shortSpan;
}

bool   Span::containsNumbers()
{
    int i(0);
    for (std::vector<int>::iterator it = _myvector.begin(); it != _myvector.end(); it++)
    {
        if (*it >= INT_MIN && *it <= INT_MAX)
            i++;
    }
    if (i <= 1)
        return false;
    return true;
}

int    Span::longestSpan()
{
    // for (std::vector<int>::iterator it = _myvector.begin(); it != _myvector.end(); ++it) {
        // std::cout << *it << " ";
    // }
    int lonGestSpan(-1);
    if (!containsNumbers())
        throw std::string("No span can be found !");
    else
    {
        // std::vector<int>::iterator minIter = std::min_element(_myvector.begin(), _myvector.end());
        // int it = *minIter;
        // std::cout << "VALUE OF BEGIN: " <<  it << std::endl;
        // it = _myvector.end();
        // std::cout << "VALUE OF END: " <<  *it << std::endl;
        // int n = *std::min_element(_myvector.begin(), _myvector.end());
        // std::cout << n << std::endl;
        lonGestSpan = *(std::max_element(_myvector.begin(), _myvector.end())) - *(std::min_element(_myvector.begin(), _myvector.end()));
    }
    return lonGestSpan;
}

Span::~Span() {}

/*
Last but not least, it would be wonderful to fill your Span using a range of iterators.
Making thousands calls to addNumber() is so annoying. Implement a member function
to add many numbers to your Span in one call.
*/