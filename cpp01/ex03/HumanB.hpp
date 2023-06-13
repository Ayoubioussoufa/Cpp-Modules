/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:33:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:33:58 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon  *_weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void	setWeapon(Weapon &weapon);
};

#endif