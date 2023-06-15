/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:57:25 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/15 11:07:40 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->setType();
    _brain = new Brain();
    std::cout << "Dog initialised" << std::endl;
}

void    Dog::setType()
{
    _type = "Dog";
}

Dog::Dog(const Dog& other)
{
    _brain = new Brain;
    _brain = other._brain;
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