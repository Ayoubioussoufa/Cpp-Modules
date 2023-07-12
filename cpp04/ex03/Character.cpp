/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:01:33 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 17:08:02 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character's default constructor called"  << std::endl;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0 ; i < 4; i++)
        _inventory[i] = NULL;
    std::cout << "Character's parameterized constructor called"  << std::endl;
}

Character::Character(const Character& character) : _name(character._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (character._inventory[i] != NULL)
            _inventory[i] = character._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    std::cout << "Character's copy constructor called"  << std::endl;
}

Character& Character::operator=(const Character& character)
{
    std::cout << "Character's copy constructor called"  << std::endl;
    if (this != &character)
    {
        _name = character._name;
        for  (int i = 0; i < 4; i++)
        {
            delete _inventory[i];
            if (character._inventory[i] != NULL)
                _inventory[i] = character._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        _inventory[idx] = NULL;
}

void Character::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != 0)
        _inventory[idx]->use(target);
}

Character* Character::clone() const
{
    return new Character(*this);
}

Character::~Character()
{
    for (int i = 0 ; i < 4; i++)
        delete _inventory[i];
    std::cout << "Character's destructor called"  << std::endl;
}