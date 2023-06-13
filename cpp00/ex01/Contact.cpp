/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:33:05 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/05 11:33:05 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_subLen(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

std::string Contact::_getInput(std::string str) const
{
    std::string string;
    bool    valid = false;

    while (!valid)
    {
        std::cout << str;
        std::getline(std::cin, string);
        if (std::cin.good() && !std::cin.eof() && !string.empty())
            valid = true;
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, please try again." << std::endl;
        }
    }
    return (string);
}

void    Contact::init(void)
{
    std::cin.clear();
    _firstName = _getInput("Please enter you first name: ");
    _lastName = _getInput("Please enter your last name: ");
    _nickname = _getInput("Please enter your nickname: ");
    _nickname = _getInput("Please enter your phone number: ");
    _nickname = _getInput("Please enter your darkest secret: ");
}

void    Contact::display(int index) const
{
    if (_firstName.empty() || _lastName.empty() || _nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "Contact Index:\t" << index << std::endl;
    std::cout << "First Name:\t" << _firstName << std::endl;
    std::cout << "Last Name:\t" << _lastName << std::endl;
    std::cout << "Nickname:\t" << _nickname << std::endl;
    std::cout << std::endl;
}

void    Contact::setIndex(int index)
{
    _index = index;
}

void    Contact::view(int index) const
{
    if (_firstName.empty() || _lastName.empty() || _nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << _subLen(_firstName);
    std::cout << "|" << std::setw(10) << _subLen(_lastName);
    std::cout << "|" << std::setw(10) << _subLen(_nickname);
    std::cout << "|" << std::endl;
}
