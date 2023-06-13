/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:36:50 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/11 17:05:53 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& materia) : _type(materia.getType())
{
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const& other)
{
    std::cout << "Copy assignement called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

const std::string& AMateria::getType() const
{
    return (this->_type);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

// void AMateria::use(ICharacter& target)
// {
    // std::cout << "Using AMateria on " << target.getName() << std::endl;
// }