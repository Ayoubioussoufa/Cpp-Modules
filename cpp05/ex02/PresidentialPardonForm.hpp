/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:20:00 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 21:46:58 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& presidential);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& presidential);
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};