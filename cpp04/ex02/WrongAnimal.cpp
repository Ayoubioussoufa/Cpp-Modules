/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:10:02 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/09 16:02:24 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->setType();
    std::cout << "Wrong initialised" << std::endl;
}

void    WrongAnimal::setType()
{
    _type = "Cow";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : Animal(other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound : meee3" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal Destroyed" << std::endl;
}