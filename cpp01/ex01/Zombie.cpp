/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:11:24 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/08 11:20:59 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "Foo";
    std::cout << "Zombie named " << _name << " is created." << std::endl;
}

Zombie::Zombie(std::string name)
{
 
    _name = name;
    std::cout << _name << " is created" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed" << std::endl;
}

void    Zombie::setName(std::string name)
{
    _name = name;
}
