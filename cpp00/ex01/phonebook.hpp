/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:33:31 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/05 11:33:31 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook 
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    add(void);
        void    printContacts(void) const;
        void    search(void) const;
        void    firsttime(void) const;
    private:
        Contact _contacts[8];
        int     _input(void) const;
};

#endif