/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:35:30 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/12 09:23:29 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac <= 2)
    {
        std::string str(ScalarConverter::parseType(av[1]));
        ScalarConverter::toChar(str);
        ScalarConverter::toInt(str);
        ScalarConverter::toFloat(str);
        ScalarConverter::toDouble(str);
    }
    else
        std::cout << "Too many arguments" << std::endl;
}