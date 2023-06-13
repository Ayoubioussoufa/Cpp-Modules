/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:53:55 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 14:53:55 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _storeFixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& number) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &number)
        _storeFixedPoint = number.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed& x)
{
    this->_storeFixedPoint = x._storeFixedPoint;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _storeFixedPoint;
}

void Fixed::setRawBits( int const raw )
{
    _storeFixedPoint = raw;
}
