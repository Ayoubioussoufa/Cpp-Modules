/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:28:05 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:33:34 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 0)
        return NULL;
    Zombie  *z1 = new Zombie[N];

    for (int i = 0; i < N; i++)
        z1[i].setName(name);
    return (z1);
}
