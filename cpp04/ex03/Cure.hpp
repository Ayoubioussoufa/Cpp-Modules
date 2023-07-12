/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:07:25 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 12:18:08 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : virtual public AMateria
{
    public:
        Cure();
        Cure(const Cure& cure);
        Cure& operator=(const Cure& cure);
        void    setType();
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};