/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:57 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/12 12:21:29 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <sstream>
#include <string>
#include <cctype>

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
        static char parseChar(std::string str);
        static int parseInt(std::string str);
        static float parseFloat(std::string str);
        static double parseDouble(std::string str);
        static void parseType(std::string str);
        static int toInt(std::string str);
        static float toFloat(std::string str);
        static double toDouble(std::string str);
        static char toChar(std::string str);
        static int getInt(void);
        static float getFloat(void);
        static double getDouble(void);
        static char getChar(void);
        ~ScalarConverter();  
};

std::string::iterator& operator>(std::string::iterator &o, ScalarConverter const &i);
