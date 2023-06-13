/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:54:34 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 14:54:34 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int _storeFixedPoint;
        static const int  _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed& x);
        Fixed& operator=(const Fixed& number);
        bool operator<(const Fixed& number) const;
        bool operator>(const Fixed& number) const;
        bool operator>=(const Fixed& number) const;
        bool operator<=(const Fixed& number) const;
        bool operator==(const Fixed& number) const;
        bool operator!=(const Fixed& number) const;
        Fixed operator+(const Fixed& number) const;
        Fixed operator-(const Fixed& number) const;
        Fixed operator*(const Fixed& n1) const;
        Fixed operator/(const Fixed& number) const;
        Fixed& operator++(void); //prefix
        Fixed operator++(int);
        Fixed& operator--(void); //prefix
        Fixed operator--(int);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed& min(Fixed& n1, Fixed& n2);
        static const Fixed& min(const Fixed& n1, const Fixed& n2);
        static Fixed& max(Fixed& n1, Fixed& n2);
        static const Fixed& max(const Fixed& n1, const Fixed& n2);
};

std::ostream& operator<<(std::ostream &o, Fixed const &i);

#endif