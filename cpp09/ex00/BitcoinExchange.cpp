/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:24:08 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/17 11:24:11 by aybiouss         ###   ########.fr       */
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
}

void    BitcoinExchange::removeSpaces(std::string &str)
{
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}

void    BitcoinExchange::done(std::string file)
{
    std::ifstream	myfile(file); //opened the file in parameters
	if (!myfile)
	{
    	std::cerr << "Error opening file " << file << std::endl;
    	return ;
  	}
    std::string line, date, value;
    int i(0);
    int pipe;
    bool valid = true;
    while (getline(myfile, line))
    {
        pipe = 0;
        std::istringstream iss(line);
        std::getline(iss, date, '|');
        std::getline(iss, value);
        if (!i)
        {
            removeSpaces(date), removeSpaces(value);
            if (date.compare("date") || value.compare("value"))
                throw std::string("Please add date | value in the first line of your input.txt");
        }
        else if (i)
        {
            removeSpaces(date);
            valid = true;
            for (unsigned long j = 0; j < line.length(); j++)
            {
                if (!isdigit(line[j]))
                {
                    if (line[j] == '|')
                        pipe++;
                    else if (line[j] != 46 && line[j] != '-' && line[j] != '|' && line[j] != 32)
                        valid = false;
                    else if (pipe > 1)
                        valid = false;
                }
            }
        }
        if (valid && i)
        {
            if (parseDate(date))
            {
                int k = parseValue(value);
                if (!k)
                    std::cerr << "Error: bad input => " + line << std::endl;
                else if (k == 1)
                {
                    double val = stod(value);
                    std::cout << date + " => " << val << " = " << val * findClosestDate(_myMap.begin(), _myMap.end(), date) << std::endl;
                }
                else if (k == 2)
                    std::cerr << "Error: not a positive number." << std::endl;
                else if (k == 3)
                    std::cerr << "Error: too large number." << std::endl;
            }
            else
                std::cout << "Error: Bad input => " + date << std::endl;
        }
        else if (!valid && i)
        {
            std::cout << "Error: Bad input => " + line << std::endl;
        }
        i++;
    }
}

double  BitcoinExchange::findClosestDate(std::map<std::string, double>::iterator begin, std::map<std::string, double>::iterator end, std::string date)
{
   std::map<std::string, double>::iterator it = _myMap.lower_bound(date);
   if (it == begin)
        return begin->second;
    else if (it == end)
        return (--it)->second;
    else
    {
        std::map<std::string, double>::iterator prev = it;
        if (!date.compare(it->first))
            return prev->second;
        --prev;
        if (date.compare(it->first) < date.compare(prev->first))
            return prev->second;
        else
            return it->second;
    }
    return it->second;
}

bool BitcoinExchange::isLeapYear(int year)
{
    if (year % 4 != 4)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    return true; //It follows the rules of a leap year: if the year is divisible by 4 but not divisible by 100, or if it is divisible by 400, then it is a leap year.
}

bool BitcoinExchange::parseDate(std::string date)
{
    if (std::count(date.begin(), date.end(), '-') != 2 || date.length() >= 10)
        return false;
    else
    {
        std::istringstream iss(date);
        std::string year, month, day;
        std::getline(iss, year, '-');
        std::getline(iss, month, '-');
        std::getline(iss, day, '-');
        int iyear, imonth, iday; //continue
        iyear = stoi(year);
        imonth = stoi(month);
        iday = stoi(day);
        bool isLeap = isLeapYear(iyear);
        int daysInMonth[] = {31, 28 + isLeap, 31, 30, 31, 30, 31, 31, 30,   31, 30, 31};
        if (imonth >= 1 && imonth <= 12)
        {
            if (!(daysInMonth[imonth - 1] >= iday && iday >= 1))
                return false;
        }
        else
            return false;
        if (isLeapYear(iyear))
        {
            if (imonth == 2)
            {
                if (iday >= 1 && iday <= 29)
                    return true;
                else
                    return (false);
            }
        }
        return true;
    }
    return false;
}

int BitcoinExchange::parseValue(std::string value)
{
    if (value.empty())
        return 0;
    for (unsigned long j = 0; j < value.length(); j++)
    {
        if (!isdigit(value[j]))
        {
            if ((value[j] == '-' && j != 1) || value[j] == '|')
                return 0;
        }
    }
    int i(0);
    std::istringstream iss(value);
    std::string token;
    while (std::getline(iss, token, ' '))
    {
        if (!token.empty())
            i++;
    }
    if (i > 1)
        return false;
    else
    {
        double realOne = stod(value);
        if (realOne < 0)
            return 2;
        else if (realOne > 1000)
            return 3;
    }
    return 1;
}
