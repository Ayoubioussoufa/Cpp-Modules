/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:11:07 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/13 14:28:00 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap ash( "Ash" );
    ScavTrap ash2( ash );
    ClapTrap p("miaw");

    // ash.attack( "the air" );
    // ash.takeDamage( 101 );
    // ash.takeDamage( 101 );
    ash.attack("");
    p.attack("ed");
    // ash2.beRepaired( 10 );
    // ash2.guardGate();
    ash.guardGate();
}