/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:19:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/20 06:39:30 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm()
// {
//     std::cout << "Default constructor of RobotomyRequestForm called" << std::endl;
// }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target)
{
    std::cout << "Parametrized constructor of RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robot) : AForm(robot), _target(robot._target)
{
    std::cout << "Copy constructor of RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robot)
{
    if (this != &robot)
    {
        AForm::operator=(robot);
        _target = robot._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    static int  i(1);
    if (!this->getSigned())
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getRequiredGrade())
        throw AForm::NotSignedException();
    else {
        if (i % 2)
            std::cout << "The " << _target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "The " << _target << " robotomy has failed" << std::endl;
        i++;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor of RobotomyRequestForm called" << std::endl;
}
