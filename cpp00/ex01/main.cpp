/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:40:52 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/05 11:40:52 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook book;
    std::string input;
    book.firsttime();
    int i = 0;
    while (input != "EXIT")
    {
        if (input == "ADD")
        {
            book.add();
            std::cout << "> ";
        }
        else if (input == "SEARCH")
        {
            book.printContacts();
            book.search();
            std::cout << "> ";
        }
        else if (std::cin.eof())
            break ;
        else
            std::cout << "> ";
        std::getline(std::cin, input);
    }
    return (0);
}