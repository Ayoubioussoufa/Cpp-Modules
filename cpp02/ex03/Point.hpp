/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:55:03 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/10 17:10:48 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point(const Fixed& x, const Fixed& y);
        Point(const Point &point);
        Point& operator=(const Point& point);
        const Fixed& getX(void) const;
        const Fixed& getY(void) const;
        ~Point();
};

Fixed calculate_area(Point one, Point two, Point three);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif