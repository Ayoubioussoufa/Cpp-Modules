/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:35:30 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/12 13:46:20 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    // (void)ac;
    // (void)av;
    if (ac <= 2)
    {
        try {
            ScalarConverter::parseType(av[1]);
        } catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "Too many arguments" << std::endl;
}