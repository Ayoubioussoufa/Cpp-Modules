/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:57:25 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 11:30:58 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->setType();
    try {
        _brain = new Brain;
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Dog initialised" << std::endl;
}

void    Dog::setType()
{
    _type = "Dog";
}

Dog::Dog(const Dog& other)
{
    try {
        _brain = new Brain(*other._brain);
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << e.what() << std::endl;
    }
    this->setType();
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "3AW 3AW 3AW" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog Destroyed" << std::endl;
}