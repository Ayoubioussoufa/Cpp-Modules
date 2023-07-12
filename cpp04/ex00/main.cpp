/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:55:00 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 17:11:20 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Dog *p = new Dog();
    const WrongAnimal* me = new WrongCat();
    const WrongAnimal* met = new WrongAnimal();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << p->getType() << " " << std::endl;
    p->makeSound();
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    me->makeSound();
    met->makeSound();
    delete j;
    delete meta;
    delete i;
    delete p;
    delete met;
    delete me;
    return 0;
}