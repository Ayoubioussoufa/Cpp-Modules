/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:26:57 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 21:46:55 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& robot);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& robot);
        void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};