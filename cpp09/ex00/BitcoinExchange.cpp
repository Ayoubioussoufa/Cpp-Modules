/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:24:08 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/15 12:26:02 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {(void)other;}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {(void)other; return *this;}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::fillMap()
{
    std::ifstream	myfile("data.csv");
	if (!myfile)
	{
    	std::cerr << "Error opening file " << "data.csv" << std::endl;
    	return ;
  	}
    std::string line, date, value;
    int i(0);
    while (std::getline(myfile, line))
    {
        std::istringstream iss(line);
        std::getline(iss, date, ',');
        std::getline(iss, value, ',');
        if (!i)
        {
            i++;
            if (date.compare("date") || value.compare("exchange_rate"))
                throw std::string("Please add date,exchange_rate in the first line of data.csv");
        }
        else
        {
            double exchangeRate = stod(value);
            _myMap[date] = exchangeRate;
        }
    }
    // for (std::map<std::string, double>::iterator it = _myMap.begin(); it != _myMap.end(); it++)
    // {
    //     std::cout << "Date: " << it->first << ", Exchange rate: " << it->second << std::endl;
    // }
}

void    BitcoinExchange::done(std::ifstream file)
{
    std::string line, date, value;
    int i(0);
    while (getline(file, line))
    {
        std::istringstream iss(line);
        std::getline(iss, date, '|');
        std::getline(iss, value, '|');
        if (!i)
        {
            i++;
            if (date.compare("date") || value.compare("value"))
                throw std::string("Please add date | value in the first line of your input.txt");
        }
        if (parseDate(date) || parseValue(value))
            ;
    }
}

bool ExchangeBitcoin::parseDate(std::string date)
{
    if (std::count(date.begin(), date.end(), "-") != 2)
    {
        throw std::string("Error: bad input => " + date);
    }
    std::istringstream iss(date);
    std::string year, month, day;
    std::getline(iss, year, '-');
    std::getline(iss, month, '-');
    std::getline(iss, day, '-');
    int iyear, imonth, iday; //continue
}

bool ExchangeBitcoin::parseValue(std::string value)
{

}
