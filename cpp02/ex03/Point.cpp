/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:54:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/10 15:56:20 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
    // std::cout << "Default constructor initialised x and y to 0" << std::endl;
}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y)
{
    // std::cout << "Constructor initialised _x with " << x << " and _y with " << y << std::endl;
}

Point::Point(const Point& point) : _x(point._x), _y(point._y)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& point)
{
    (void)point;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}

const Fixed& Point::getX(void) const
{
    return (_x);
}

const Fixed& Point::getY(void) const
{
    return (_y);
}
