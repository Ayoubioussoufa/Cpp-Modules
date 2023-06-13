/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:35:08 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:35:08 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen   k;

	if (ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		k.complain(av[1]);
	return (0);
}