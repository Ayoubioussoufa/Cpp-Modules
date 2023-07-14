/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:55:44 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 11:28:06 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
    private:
        T*   _element;
    public:
        Array() { _element = new T[0];}
        Array(unsigned int n)
        {
            _element = new T[n];
            // std::cout << "Parametrized Constructor called" << std::endl;
        }
        Array(const Array& other)
        {
            T j(0);
            while (other._element[j])
                j++;
            _element = new T[j];
            *this = other;
            // std::cout << "Copy Constructor called" << std::endl;
        }
        Array& operator=(const Array& other)
        {
            T i(0);
            // std::cout << "Copy assignment called" << std::endl;
            if (_element) {
                delete [] _element;
            }
            T j(0);
            while (other._element[j])
                j++;
            _element = new T[j];
            while (other._element[i])
            {
                _element[i] = other._element[i];
                i++;
            }
            return *this;
        }
        T& operator[](int i)
        {
            return (_element[i]);
        }
        unsigned int size()
        {
            static int i(0);
            i++;
            return i;
        }
        ~Array()
        {
            // std::cout << "Destructor called" << std::endl;
            delete [] _element;
        }
};