/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:23:24 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/17 08:42:00 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>
#include <exception>

class BitcoinExchange
{
    private:
        std::map<std::string, double>   _myMap;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        void    fillMap();
        void    done(std::string file);
        ~BitcoinExchange();
        bool parseDate(std::string date);
        int parseValue(std::string value);
        bool isLeapYear(int year);
        void    removeSpaces(std::string &str);
        double  findClosestDate(std::map<std::string, double>::iterator begin, std::map<std::string, double>::iterator end, std::string date);
};