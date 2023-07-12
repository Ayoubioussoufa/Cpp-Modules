/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:55:00 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 17:10:48 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void function()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* k[100];
    Dog basic;
    {
        Dog tmp = basic;
    }
    for (int p = 0; p < 100; p++)
        (p < 50) ? ( k[p] = new Dog()) : (k[p] = new Cat());
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;//should not create a leak
    delete i;
    delete meta;
    for (int x = 0; x < 100; x++)
        delete k[x];
}

int main()
{
    function();
    system("leaks Animal");
    return 0;
}