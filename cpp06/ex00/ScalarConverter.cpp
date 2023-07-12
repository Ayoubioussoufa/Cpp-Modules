/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:49 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/12 11:38:10 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::_intValue = 0;
float ScalarConverter::_floatValue = 0.0f;
double ScalarConverter::_doubleValue = 0.0;
char ScalarConverter::_charValue = '\0';

char ScalarConverter::parseChar(std::string str) {
    int i = std::stoi(str);
    char c = static_cast<char>(i);
    std::cout << "char : " << c << std::endl;
    return c;
}

int ScalarConverter::parseInt(std::string str) {
    int i;
    i = stoi(str);
    std::cout << "int : " << i << std::endl;
    return i;
}

float ScalarConverter::parseFloat(std::string str) {
    float f;
    f = std::stof(str);
    std::cout << "float : " << f <<std::endl;
    return f;
}

double ScalarConverter::parseDouble(std::string str) {
    double d;
    d = std::stod(str);
    std::cout << "double : " << d << std::endl;
    return d;
}

std::string ScalarConverter::parseType(std::string str) {
    if (str.compare("-inff") || str.compare("+inff") str.compare("nanf")) {
        
    }
    else if (str.compare("-inf") || str.compare("+inf") str.compare("nan")) {
        
    }
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        if (!isdigit(*it))
        {
            if (*it == '.')
                continue ;
            else if (*it == 'f')
        }
    }
}

double ScalarConverter::toDouble(std::string value) {
    try {
        return parseDouble(value);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }
}

float ScalarConverter::toFloat(std::string value) {
    try {
        return parseFloat(value);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }
}

char ScalarConverter::toChar(std::string value) {
    try {
        return parseChar(value);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 0;
    }
}

int ScalarConverter::toInt(std::string value) {
    try {
        return parseInt(value);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }
}

int ScalarConverter::getInt(void)
{
    return _intValue;
}

float ScalarConverter::getFloat(void)
{
    return _floatValue;
}

double ScalarConverter::getDouble(void)
{
    return _doubleValue;
}

char ScalarConverter::getChar(void)
{
    return _charValue;
}
