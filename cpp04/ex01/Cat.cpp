/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:57:32 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/15 11:06:40 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->setType();
    _brain = new Brain();
    std::cout << "Cat initialised" << std::endl;
}

void    Cat::setType()
{
    _type = "Cat";
}

Cat::Cat(const Cat& other)
{
    _brain = new Brain;
    _brain = other._brain;
    this->setType();
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
    delete _brain;
    std::cout << "Dog Destroyed" << std::endl;
}
