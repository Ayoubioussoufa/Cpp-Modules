/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:55:44 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/20 21:51:39 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
    private:
        T*   _element;
        unsigned int _size;
    public:
    class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
    };
        Array() : _element(new T()), _size(0) {}
        Array(unsigned int n)
        {
            _element = new T[n];
            _size = n;
            // std::cout << "Parametrized Constructor called" << std::endl;
        }
        Array(const Array& other) : _element( new T[other.size()] ), _size(other.size() )
        {
            for ( unsigned int i( 0 ); i < _size; i++ )
                _element[i] = other._element[i];
            // std::cout << "Copy Constructor called" << std::endl;
        }
        Array& operator=(const Array& other)
        {
            if ( this != &other ) {
                delete [] _element;
                _element = new T[other.size()];
                _size = other._size;
                for ( unsigned int i( 0 ); i < _size; i++ )
                    _element[i] = other._element[i];
            }
            return *this;
        }
        T& operator[](int i)
        {
            if ( i >= _size )
                throw OutOfBoundsException();
            return (_element[i]);
        }
        unsigned int size()
        {
            return _size;
        }
        ~Array()
        {
            // std::cout << "Destructor called" << std::endl;
            delete [] _element;
        }
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}