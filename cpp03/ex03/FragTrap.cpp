/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:33:37 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/13 15:13:51 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Default constructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    _name = name;
    std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed"<< std::endl;
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
    _name = other._name;
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
