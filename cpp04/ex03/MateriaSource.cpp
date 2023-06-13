/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:58:13 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/11 16:19:20 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = nullptr;
    std::cout << "Materiasource's default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    for (int i = 0; i < 4; i++)
    {
        if (other.materias[i] != nullptr)
            materias[i] = other.materias[i]->clone();
        else
            materias[i] = nullptr;
    }
    std::cout << "MateriaSource's copy constructor called"  << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    std::cout << "MateriaSource's copy constructor called"  << std::endl;
    if (this != &other)
    {
        for  (int i = 0; i < 4; i++)
        {
            delete materias[i];
            if (other.materias[i] != nullptr)
                materias[i] = other.materias[i]->clone();
            else
                materias[i] = nullptr;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] == nullptr)
        {
            materias[i] = m->clone();
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != nullptr && materias[i]->getType() == type)
            return (materias[i]->clone());
    }
    return  nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        delete materias[i];
    std::cout << "Materiasource's destructor called" << std::endl;
}
