/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:23:24 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/15 12:07:45 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange : std::map<std::string,double>
{
    private:
        std::map<std::string, double>   _myMap;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        void    fillMap();
        void    done(std::ifstream file);
        ~BitcoinExchange();
        bool parseDate(std::string date);
        bool parseValue(std::string value);
};