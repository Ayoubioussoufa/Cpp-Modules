/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:10:05 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 15:43:58 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->setType();
    std::cout << "WrongCat initialised" << std::endl;
}

void    WrongCat::setType()
{
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat sound : miw miw" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destroyed" << std::endl;
}