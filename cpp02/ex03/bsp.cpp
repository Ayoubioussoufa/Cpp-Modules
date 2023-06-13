/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:02:51 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/10 17:04:04 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed calculate_area(Point one, Point two, Point three)
{
    Fixed area;

    area = (one.getX() * (two.getY() - three.getY()) + two.getX() * (three.getY() - one.getY()) + three.getX() * (one.getY() - two.getY())) / 2;
    if (area < 0)
        area = area * -1;
    return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed area;
    Fixed area1;
    Fixed area2;
    Fixed area3;

    area = calculate_area(a, b, c);
    area1 = calculate_area(point, a, b);
    area2 = calculate_area(point, a, c);
    area3 = calculate_area(point, b, c);
    if ((area == area1 + area2 + area3) && (area1 != 0 && area2 != 0 && area3 != 0))
        return (true);
    return false;
}
