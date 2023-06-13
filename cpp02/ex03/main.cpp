/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:54:54 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 14:54:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point   a(-10, 0);
    Point   b(0, 10);
    Point   c(10, 0);
    Point   point(1, 1);

    if (bsp(a, b, c, point))
        std::cout << "The point is on the triangle." << std::endl;
    else
        std::cout << "The point is NOT on the triangle." << std::endl;
    return 0;
}
