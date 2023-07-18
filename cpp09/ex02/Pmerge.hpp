/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:06:20 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/18 14:50:39 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <unistd.h>

template <typename T>
class Pmerge
{
    // private:
    //     T   plop;
    // private:
    public:
        T  _myContainer;
        Pmerge() {}
        Pmerge(const Pmerge& other) {(void)other;}
        Pmerge& operator=(const Pmerge& other) {(void)other; return *this;}
        ~Pmerge() {}
        bool isStringDigits(std::string str) {
            for (std::size_t i = 0; i < str.length(); ++i) {
                if (!std::isdigit(str[i])) {
                    return false;
                }
            }
            return true;
        }
        
        void    iterateBefore()
        {
            std::cout << "Before: ";
            for (typename T::iterator it = _myContainer.begin(); it != _myContainer.end(); it++)
            {
                std::cout << *it << " ";
            }
            std::cout<< std::endl;
        }

        void    fillContainers (char** av)
        {
            int i(1);
            int number;
            std::string token;
            while (av[i])
            {
                std::istringstream  iss(av[i]);
                if (std::string(av[i]).find(' ') == std::string::npos)
                {
                   if (isStringDigits(av[i]) && !std::string(av[i]).empty())
                    {
                        number = atoi(av[i]);
                        _myContainer.push_back(number);
                    }
                    else
                    {
                        std::cout << "Error" << std::endl;
                        return ;
                    }
                }
                else {
                    while (std::getline(iss, token, ' '))
                    {
                        if (isStringDigits(token) && !token.empty())
                        {
                            number = stoi(token);
                            _myContainer.push_back(number);
                        }
                        else
                        {
                            std::cout << "Error" << std::endl;
                            return ;
                        }
                    }
                }
                i++;
            }
        }


        void    mergeSorting(void)
        {
            mergeSort(_myContainer, _myContainer.begin(), _myContainer.end());
        }
        template <typename Container>
        void mergeSort(Container& array, typename Container::iterator begin, typename Container::iterator end)
        {
            if (std::distance(begin, end) > 1) {
                typename Container::iterator mid = begin + std::distance(begin, end) / 2;
        
                mergeSort(array, begin, mid);
                mergeSort(array, mid, end);
        
                merge<Container>(begin, mid, end);
            }
        }
        
        template <typename Container>
        void merge(typename Container::iterator begin, typename Container::iterator mid, typename Container::iterator end)
        {
            Container left(begin, mid);
            Container right(mid, end);
        
            typename Container::iterator leftIt = left.begin();
            typename Container::iterator rightIt = right.begin();
            typename Container::iterator dest = begin;
        
            while (leftIt != left.end() && rightIt != right.end()) {
                if (*leftIt <= *rightIt) {
                    *dest++ = *leftIt++;
                } else {
                    *dest++ = *rightIt++;
                }
            }
        
            // Copy the remaining elements, if any
            while (leftIt != left.end()) {
                *dest++ = *leftIt++;
            }
        
            while (rightIt != right.end()) {
                *dest++ = *rightIt++;
            }
        }
};

/*
template <typename T>
class Pmerge
{
    private:
        std::vector<int>  _myContainer;
        std::deque<int>   _myDeque;
        Pmerge(const Pmerge& other);
        Pmerge& operator=(const Pmerge& other);
    public:
        Pmerge();
        void    fillContainers(char** av);
        bool    isStringDigits(std::string str);
        void    mergeSort(T array, typename T::iterator begin, typename T::iterator end);
        // void    merge();
        ~Pmerge();
*/