/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:07:11 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/16 12:18:13 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : virtual public AMateria
{
    public:
        Ice();
        Ice(const Ice& Ice);
        Ice& operator=(const Ice& Ice);
        void    setType() ;
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();
};