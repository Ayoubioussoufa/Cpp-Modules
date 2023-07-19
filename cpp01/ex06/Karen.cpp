/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:34:54 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:34:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    std::cout << "Karen appeared" << std::endl;
}
Karen::~Karen()
{
    std::cout << "Karen died from anger" << std::endl;
}

void    Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
    std::cout << std::endl;
}

void    Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    std::cout << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
    std::cout << std::endl;
}

void    Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Karen::complain(std::string level)
{
    int i;
    void		(Karen::*ptr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string karen[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

     for (i = 0; i < 4; i++)
	{
		if (karen[i] == level)
			break ;
	}
    switch (i)
	{
		case 0:
            (this->*ptr[i++])();
		case 1:
            (this->*ptr[i++])();
		case 2:
            (this->*ptr[i++])();
		case 3:
            (this->*ptr[i])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}