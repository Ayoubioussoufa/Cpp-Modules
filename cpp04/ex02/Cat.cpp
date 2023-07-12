/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:57:32 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 11:30:52 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->setType();
    try {
        _brain = new Brain;
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Cat initialised" << std::endl;
}

void    Cat::setType()
{
    _type = "Cat";
}

Cat::Cat(const Cat& other)
{
    try {
        _brain = new Brain(*other._brain);
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << e.what() << std::endl;
    }
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
    std::cout << "Cat Destroyed" << std::endl;
}
