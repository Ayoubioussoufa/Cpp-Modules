/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:34:10 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:34:10 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << " TYPPPPEEE :: "<< &_type << "     " << "0" <<_type << "0" << std::endl;
}

Weapon::Weapon(std::string type)
{
    _type = type;
    std::cout << "Weapon: " <<_type << " is created" << std::endl;
}

const std::string& Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon type: " << _type << " is destroyed" << std::endl;
}
