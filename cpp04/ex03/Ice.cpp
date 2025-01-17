/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:07:05 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 12:39:07 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->setType();
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria(ice)
{
    std::cout << "Ice's Copy constructor called" << std::endl;
    this->setType();
}

Ice& Ice::operator=(const Ice& Ice)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &Ice)
        this->_type = Ice._type;
    return (*this);
}

void    Ice::setType()
{
    _type = "ice";
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice's destructor called" << std::endl;
}
