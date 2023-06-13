/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:39 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:33:39 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
    std::cout << "HumanA " << _name << " is created ";
    std::cout << "with " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << _name << " is killed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
    _weapon = weapon;
}
