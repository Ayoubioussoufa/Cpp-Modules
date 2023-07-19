/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:19:46 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 21:48:31 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& shrub);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrub);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};