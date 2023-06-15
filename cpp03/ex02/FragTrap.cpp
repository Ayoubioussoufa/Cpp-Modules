/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:33:37 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 15:08:15 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Default constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Parametrized FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed"<< std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this != &other)
        *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Copy assignement called" << std::endl;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
}
void FragTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "FragTrap " << _name << " attacks " << target
                << ", causing " << this->_attackDamage << " points of damage!"<< std::endl;
    }
    else
        std::cout << "FragTrap " << _name << "has no more energy points or hit points."<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "✋🎉 High five!" << std::endl;
}
