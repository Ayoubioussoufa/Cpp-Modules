/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:11:07 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/13 14:36:52 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // ScavTrap ash( "Ash" );
    // ScavTrap ash2( ash );
    FragTrap p("7md");

    // ash.attack( "the air" );
    // ash.takeDamage( 10 );
    // ash.beRepaired( 10 );
    // ash.guardGate();
    // ash.guardGate();
    p.attack("earth");
    p.highFivesGuys();
}