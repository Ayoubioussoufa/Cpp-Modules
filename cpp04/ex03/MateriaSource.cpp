/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:58:13 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 17:09:33 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
    std::cout << "Materiasource's default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    for (int i = 0; i < 4; i++)
    {
        if (other._materias[i] != NULL)
            _materias[i] = other._materias[i]->clone();
        else
            _materias[i] = NULL;
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
            delete _materias[i];
            if (other._materias[i] != NULL)
                _materias[i] = other._materias[i]->clone();
            else
                _materias[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] == NULL)
        {
            _materias[i] = m->clone();
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i] != NULL && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    }
    return  NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete _materias[i];
    std::cout << "Materiasource's destructor called" << std::endl;
}
