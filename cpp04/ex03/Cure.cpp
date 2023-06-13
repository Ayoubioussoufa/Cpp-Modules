/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:07:18 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/11 14:20:49 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Default constructor called" << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
    std::cout << "Copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& cure)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &cure)
        this->_type = cure._type;
    return (*this);
}

void    Cure::setType()
{
    _type = "cure";
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" <<  std::endl;
}

Cure::~Cure()
{
    std::cout << "Default destructor called" << std::endl;
}
