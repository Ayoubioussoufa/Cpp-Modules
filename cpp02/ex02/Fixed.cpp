/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:54:26 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 14:54:26 by aybiouss         ###   ########.fr       */
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
    std::cout << "Int constructor called: " << _storeFixedPoint << std::endl;
}

Fixed::Fixed(const float f) : _storeFixedPoint(std::roundf(f * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called: " << _storeFixedPoint << std::endl;
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
    return static_cast<float>(getRawBits()) / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
    return _storeFixedPoint >> _fractionalBits;
}

std::ostream& operator<<(std::ostream &o, Fixed const &i)
{
    return (o << i.toFloat());
}

bool Fixed::operator<(const Fixed& number) const
{
    return this->getRawBits() < number.getRawBits();
}

bool Fixed::operator>(const Fixed& number) const
{
    return this->getRawBits() > number.getRawBits();
}

bool Fixed::operator>=(const Fixed& number) const
{
    return this->getRawBits() >= number.getRawBits();
}

bool Fixed::operator<=(const Fixed& number) const
{
    return this->getRawBits() <= number.getRawBits();
}

bool Fixed::operator==(const Fixed& number) const
{
    return this->getRawBits() == number.getRawBits();
}

bool Fixed::operator!=(const Fixed& number) const
{
    return this->getRawBits() != number.getRawBits();
}

Fixed Fixed::operator+(const Fixed& number) const
{
    return Fixed(this->toFloat() + number.toFloat());
}

Fixed Fixed::operator-(const Fixed& number) const
{
    return Fixed(this->toFloat() - number.toFloat());
}

Fixed Fixed::operator*(const Fixed& n1) const
{
    return Fixed(this->toFloat() * n1.toFloat());
}

Fixed Fixed::operator/(const Fixed& number) const
{
    return Fixed( this->toFloat() / number.toFloat());
}

Fixed& Fixed::operator++(void)
{
    ++_storeFixedPoint;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed   temp(*this);
    temp._storeFixedPoint = this->_storeFixedPoint++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed   temp(*this);
    temp._storeFixedPoint = this->_storeFixedPoint--;
    return temp;
}

Fixed& Fixed::operator--(void)
{
    --_storeFixedPoint;
    return *this;
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
    return (n1 < n2) ? (n1) : (n2);
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
    return (n1 < n2) ? (n1) : (n2);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
    return (n1 > n2) ? (n1) : (n2);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2)
{
    return (n1 > n2) ? (n1) : (n2);
}