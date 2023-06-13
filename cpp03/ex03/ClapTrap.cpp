/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:11:04 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/13 15:12:58 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor of ClapTrap " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Parametrized constructor of ClapTrap " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy Constructor called" << std::endl;
    if (this != &other)
        *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignement called" << std::endl;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    _name = other._name;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target
                << ", causing " << _attackDamage << " points of damage!"<< std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no more energy points or hit points."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " took "
                << amount << " points of damage!"<< std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no more energy points or hit points."<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " getting repaired "
                << amount << " points of damage!"<< std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " has no more energy points or hit points."<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}