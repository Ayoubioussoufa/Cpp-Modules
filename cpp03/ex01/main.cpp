/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:11:07 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 14:37:02 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap ash( "Ash" );
    ScavTrap ash2( ash );
    ClapTrap p("whatever");

    ash.attack( "the air" );
    ash.takeDamage( 101 );
    // ash.attack("plop");
    ash2.beRepaired( 10 );
    ash2.guardGate();
    ash.guardGate();
}