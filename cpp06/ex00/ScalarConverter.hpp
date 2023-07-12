/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:23:57 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/12 09:27:59 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <sstream>
#include <string>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter& scalar);
        ScalarConverter& operator=(const ScalarConverter& other);
    public:
        static char parseChar(std::string str);
        static int parseInt(std::string str);
        static float parseFloat(std::string str);
        static double parseDouble(std::string str);
        static std::string parseType(std::string str);
        static int toInt(std::string str);
        static float toFloat(std::string str);
        static double toDouble(std::string str);
        static char toChar(std::string str);
        ~ScalarConverter();  
};