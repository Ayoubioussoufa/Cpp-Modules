/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:54:00 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 14:54:00 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _storeFixedPoint;
        static const int  _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& x);
        Fixed& operator=(const Fixed& number);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif