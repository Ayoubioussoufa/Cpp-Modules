/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:33:17 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/05 11:33:17 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
    public:
        Contact();
        ~Contact();
        void    init(void);
        void    display(int index) const;
        void    setIndex(int index);
        void    view(int index) const;
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
        int         _index;
        std::string _subLen(std::string str) const;
        std::string _getInput(std::string str) const;
};

#endif