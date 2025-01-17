/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:24:13 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/15 15:16:30 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    // (void)av;
    if (ac == 2)
    {
        try {
            BitcoinExchange btc;
            btc.fillMap();
            btc.done(av[1]);
        }
        catch (std::string& e)
        {
            std::cout << e << std::endl;
        }
    }
    else
    {
        std::cerr << "Error: could not open file." << std::endl;
    }
}