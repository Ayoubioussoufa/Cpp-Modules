/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:51 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:33:51 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB " << _name << " is created with no weapon" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << _name << " is killed" << std::endl;
}

void    HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
       std::cout << _name << " has no weapon" <<  std::endl;  
}

void	HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}