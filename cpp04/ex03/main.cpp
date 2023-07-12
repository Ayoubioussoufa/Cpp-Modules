/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:35:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 16:52:46 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void    function()
{
    static int i;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp[10];
    tmp[i] = src->createMateria("ice");
    me->equip(tmp[i]);
    i++;
    tmp[i] = src->createMateria("cure");
    me->equip(tmp[i]);
    i++;
    tmp[i] = src->createMateria("cure");
    me->equip(tmp[i]);
    i++;
    tmp[i] = src->createMateria("cure");
    me->equip(tmp[i]);
    i++;
    tmp[i] = src->createMateria("cure");
    me->equip(tmp[i]);
    i++;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->unequip(0);
    for (int j = 0; j <= i; j++)
        delete tmp[j];
    delete src;
    delete me;
    delete bob;
}

int main()
{
    function();
    system("leaks shoot");
    // delete bob;
    // system("leaks shoot");
    return 0;
}