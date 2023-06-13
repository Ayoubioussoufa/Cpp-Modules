/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:33:28 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/05 11:33:28 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
#include <iostream>
#include <limits>
#include <sstream>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void    PhoneBook::firsttime(void) const
{
    std::cout << std::endl;
    std::cout << "Welcome to Your Awesome PhoneBook" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search for a contact." << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::add(void)
{
    static int i;
    _contacts[i % 8].init();
    _contacts[i % 8].setIndex(i);
    i++;
}

void    PhoneBook::printContacts(void) const
{
    std::cout << "------------- PHONEBOOK CONTACTS ------------" << std::endl;
    std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
    for (int i = 0; i < 8; i++)
        _contacts[i].view(i);
    std::cout << "---------------------------------------------" << std::endl;
}

void    PhoneBook::search(void) const
{
    int i = _input();
    _contacts[i].display(i);
}

int     PhoneBook::_input(void) const
{
    int i = -1;
    bool    valid = false;
    std::string input;
    while (!valid)
    {
        std::cout << "Please enter the contact index: " << std::flush;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        if ((iss >> i && iss.eof()) && (i >= 0 && i <= 8))
            valid = true;
        else
        {
            std::cin.clear();
            // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
    }
    return (i);
}
