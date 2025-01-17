/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:49 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 07:42:32 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::_intValue = 0;
float ScalarConverter::_floatValue = 0.0f;
double ScalarConverter::_doubleValue = 0.0;
char ScalarConverter::_charValue = '\0';

// char ScalarConverter::parseChar(std::string str) {
    // int i = std::stoi(str);
    // char c = static_cast<char>(i);
    // std::cout << "char : " << c << std::endl;
    // return c;
// }
// 
// int ScalarConverter::parseInt(std::string str) {
    // int i;
    // i = stoi(str);
    // std::cout << "int : " << i << std::endl;
    // return i;
// }
// 
// float ScalarConverter::parseFloat(std::string str) {
    // float f;
    // f = std::stof(str);
    // std::cout << "float : " << f <<std::endl;
    // return f;
// }
// 
// double ScalarConverter::parseDouble(std::string str) {
    // double d;
    // d = std::stod(str);
    // std::cout << "double : " << d << std::endl;
    // return d;
// }

bool    hasDecimalPoint(double number)
{
    int intPart = static_cast<int>(number);
    double fractionalPart = number - intPart;
    return fractionalPart != 0.0;
}

void ScalarConverter::parseType(std::string str) {
    if (!str.compare("-inff") || !str.compare("-inf")) {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "-inff"  << std::endl;
        std::cout << "double: " << "-inf" << std::endl;;
    }
    else if (!str.compare("nanf") || !str.compare("nan")) {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
    }
    else if (!str.compare("+inff") || !str.compare("+inf")) {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "+inff"  << std::endl;
        std::cout << "double: " << "+inf" << std::endl;;
    }
    else
    {
        int i = 0;
        int j = 0;
        int k = 0;
        int c = 0;
        for (std::string::iterator it = str.begin(); it != str.end(); ++it)
        {
            if (!isdigit(*it))
            {
                if (*it == '.' && static_cast<int>(std::distance(str.begin(), it)) > 0)
                    k++;
                else if (*it == '+' || *it == '-' || isdigit(*it))
                    i++;
                else if (*it == 'f' && k > 0)
                    j++;
                else if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
                    c++;
            }
        }
        if (i > 1 || k > 1 || j > 1)
        {
            //error or character ?
            // std::cout << "WOOOOOOOWerror" << std::endl;
            std::cout << "Error" << std::endl;
        }
        else if (j == 1 && k == 1 && i <= 1)
        {
            //float
            _floatValue = std::stof(str);
            _intValue = static_cast<int>(_floatValue);
            _doubleValue = static_cast<double>(_floatValue);
            _charValue = static_cast<char>(_floatValue);
            std::cout << "char: ";
            if (isprint(_charValue)) {
                std::cout << "'" << _charValue << "'" << std::endl;
            } else {
                std::cout << "Conversion not displayable" << std::endl;
            }
            std::cout << "int: ";
            if (_intValue >= std::numeric_limits<int>::min() && _intValue <= std::numeric_limits<int>::max()) {
                std::cout << _intValue << std::endl;
            } else {
                std::cout << "Conversion not representable by int" << std::endl;
            }
            if (!hasDecimalPoint(_floatValue))
            {
                std::cout << "Float : "  << _floatValue << ".0f" << std::endl;
                std::cout << "Double : " << _doubleValue << ".0" <<std::endl;
            }
            else
            {
                std::cout << "Float : "  << _floatValue << "f" << std::endl;
                std::cout << "Double : " << _doubleValue << std::endl;
            }
        }
        else if (k == 1 && j == 0 && i <= 1)
        {
            //double
            _doubleValue = std::stod(str);
            _floatValue = static_cast<float>(_doubleValue);
            _intValue = static_cast<int>(_doubleValue);
            _charValue = static_cast<char>(_doubleValue);
            std::cout << "char: ";
            if (isprint(_charValue)) {
                std::cout << "'" << _charValue << "'" << std::endl;
            } else {
                std::cout << "Conversion not displayable" << std::endl;
            }
            std::cout << "int: ";
            if (_intValue >= std::numeric_limits<int>::min() && _intValue <= std::numeric_limits<int>::max()) {
                std::cout << _intValue << std::endl;
            } else {
                std::cout << "Conversion not representable by int" << std::endl;
            }
            if (!hasDecimalPoint(_doubleValue))
            {
                    std::cout << "float: ";
                if (_floatValue >= std::numeric_limits<float>::lowest() && _floatValue <= std::numeric_limits<float>::max()) {
                    std::cout << _floatValue << ".0f" << std::endl;
                } else {
                    std::cout << "Conversion not representable by float" << std::endl;
                }
                std::cout << "Double : " << _doubleValue << ".0" <<std::endl;
            }
            else
            {
                std::cout << "float: ";
                if (_floatValue >= std::numeric_limits<float>::lowest() && _floatValue <= std::numeric_limits<float>::max()) {
                    std::cout << _floatValue << "f" << std::endl;
                } else {
                    std::cout << "Conversion not representable by float" << std::endl;
                }
                std::cout << "Double : " << _doubleValue << std::endl;
            }
        }
        else if (c > 0 && i == 0 && j == 0)
        {
            _charValue = str[1];
            _intValue = static_cast<int>(_charValue);
            _floatValue = static_cast<float>(_charValue);
            _doubleValue = static_cast<double>(_charValue);
            std::cout << "char: '" << _charValue << "'" << std::endl;
            std::cout << "int: " << _intValue << std::endl;
            std::cout << "float: " << _floatValue  << ".0f" << std::endl;
            std::cout << "double: " << _doubleValue << std::endl;
        }
        else if (k == 0 && i <= 1 && j == 0)
        {
            //int
            _intValue = stoi(str);
            _floatValue = static_cast<float>(_intValue);
            _doubleValue = static_cast<double>(_intValue);
            _charValue = static_cast<char>(_intValue);
            std::cout << "char: ";
            if (isprint(_charValue)) {
                std::cout << "'" << _charValue << "'" << std::endl;
            } else {
                std::cout << "Conversion not displayable" << std::endl;
            }
            std::cout << "int: ";
            if (_intValue >= std::numeric_limits<int>::min() && _intValue <= std::numeric_limits<int>::max()) {
                std::cout << _intValue << std::endl;
            } else {
                std::cout << "Conversion not representable by int" << std::endl;
            }
            std::cout << "Float : "  << _floatValue << ".0f" << std::endl;
            std::cout << "Double : " << _doubleValue << ".0" << std::endl;
        }
    }
}

// double ScalarConverter::toDouble(std::string value) {
    // try {
        // return parseDouble(value);
    // } catch(const std::exception& e) {
        // std::cerr << e.what() << std::endl;
        // return -1;
    // }
// }
// 
// float ScalarConverter::toFloat(std::string value) {
    // try {
        // return parseFloat(value);
    // } catch(const std::exception& e) {
        // std::cerr << e.what() << std::endl;
        // return -1;
    // }
// }
// 
// char ScalarConverter::toChar(std::string value) {
    // try {
        // return parseChar(value);
    // } catch(const std::exception& e) {
        // std::cerr << e.what() << std::endl;
        // return 0;
    // }
// }
// 
// int ScalarConverter::toInt(std::string value) {
    // try {
        // return parseInt(value);
    // } catch(const std::exception& e) {
        // std::cerr << e.what() << std::endl;
        // return -1;
    // }
// }

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



