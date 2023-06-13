/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:11:22 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/07 18:39:22 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int size;

    size = 5;
    Zombie *all = zombieHorde(size, "DAMN");
    for (int i = 0; i < size; i++)
        all[i].announce();
    delete [] all;
}
