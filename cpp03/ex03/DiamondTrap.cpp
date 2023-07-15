/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:44:57 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/15 10:04:27 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "Default constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    ClapTrap::_name = name + "_clap_name";
    std::cout << FragTrap::_hitPoints << std::endl;
       std::cout <<         ScavTrap::_energyPoints << std::endl;
          std::cout <<      FragTrap::_attackDamage << std::endl;
    _name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    this->_name = other._name;
    this->ClapTrap::_name = other.ClapTrap::_name;
    this->_hitPoints = other.FragTrap::_hitPoints;
    this->_energyPoints = other.ScavTrap::_energyPoints;
    this->_attackDamage = other.FragTrap::_attackDamage;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " deleted" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is: " << _name
            << " and my ClapTrap name is " << ClapTrap::_name << std::endl; 
}
