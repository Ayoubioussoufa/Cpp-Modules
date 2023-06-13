/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:01:33 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/11 17:05:28 by aybiouss         ###   ########.fr       */
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
        inventory[i] = nullptr;
    std::cout << "Character's parameterized constructor called"  << std::endl;
}

Character::Character(const Character& character) : _name(character._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (character.inventory[i] != nullptr)
            inventory[i] = character.inventory[i]->clone();
        else
            inventory[i] = nullptr;
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
            delete inventory[i];
            if (character.inventory[i] != nullptr)
                inventory[i] = character.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }
    }
}

void Character::use(ICharacter& target)
{
    std::cout << "tz" << target.getName() << std::endl; //DONT KNOW YET
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
        inventory[idx]->use(target);
}

AMateria* Character::clone() const
{
    return new Character(*this);
}

Character::~Character()
{
    for (int i = 0 ; i < 4; i++)
        delete inventory[i];
    std::cout << "Character's destructor called"  << std::endl;
}