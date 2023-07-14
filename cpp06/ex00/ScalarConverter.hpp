/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:57 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 07:36:17 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>

class ScalarConverter
{
    private:
        static int _intValue;
        static float _floatValue;
        static double _doubleValue;
        static char _charValue;
        ScalarConverter();
        ScalarConverter(ScalarConverter& scalar);
        ScalarConverter& operator=(const ScalarConverter& other);
    public:
        static void parseType(std::string str);
        static int getInt(void);
        static float getFloat(void);
        static double getDouble(void);
        static char getChar(void);
        ~ScalarConverter();  
};

bool    hasDecimalPoint(std::string& number);