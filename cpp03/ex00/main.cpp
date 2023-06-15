/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:11:07 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 14:29:49 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap person;

    person.attack("Ahmed");
    person.attack("Omar");
    person.attack("Ahmed");
    person.attack("Omar");
    person.attack("Ahmed");
    person.attack("Ahmed");
    person.attack("Omar");
    person.attack("Ahmed");
    person.attack("Omar");
    person.takeDamage(50);
    person.takeDamage(50);
}