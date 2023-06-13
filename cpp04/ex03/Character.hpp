/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:01:36 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/11 17:05:12 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Character : public ICharacter, public AMateria
{
    private:
        std::string  _name;
        AMateria*    inventory[4];
    public:
        static AMateria** array;
        Character();
        Character(std::string name);
        Character(const Character& character);
        Character& operator=(const Character& character);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        AMateria* clone() const;
        void use(int idx, ICharacter& target);
        void use(ICharacter& target);
        ~Character();
};