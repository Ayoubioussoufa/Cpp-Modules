/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:54:11 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 14:54:11 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _storeFixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _storeFixedPoint(i << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _storeFixedPoint(std::roundf(f * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called :" << std::endl;
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& x)  : _storeFixedPoint(x._storeFixedPoint)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& number) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &number)
        _storeFixedPoint = number.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return _storeFixedPoint;
}

void Fixed::setRawBits( int const raw )
{
    _storeFixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>( getRawBits()) / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
    return _storeFixedPoint >> _fractionalBits;
}

std::ostream& operator<<(std::ostream &o, Fixed const &i)
{
    return (o << i.toFloat());
}