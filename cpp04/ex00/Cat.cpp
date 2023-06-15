/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:57:32 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/15 10:58:49 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->setType();
    std::cout << "Cat initialised" << std::endl;
}

void    Cat::setType()
{
    _type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "MIIIIIIIIIAAAAWWWW" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destroyed" << std::endl;
}
