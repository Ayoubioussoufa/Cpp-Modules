/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:24:13 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/15 11:55:02 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::ifstream	myfile(av[1]); //opened the file in parameters
		if (!myfile)
		{
    		std::cerr << "Error opening file " << av[1] << std::endl;
    		return 1;
  		}
        BitcoinExchange btc;
        btc.fillMap();
        btc.done(myfile);
    }
    else
    {
        std::cerr << "Error: could not open file." << std::endl;
    }
}