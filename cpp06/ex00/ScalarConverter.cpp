/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:49 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/12 09:40:17 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
    (void)str;
    std::cout << "NO Parsing yet" << std::endl;
    std::string ss(str);
    return ss;
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
