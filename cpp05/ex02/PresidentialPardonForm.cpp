/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:20:03 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 21:42:47 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default constructor of PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5), _target(target)
{
    std::cout << "Parametrized constructor of PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidential) : AForm(presidential), _target(presidential._target)
{
    std::cout << "Copy constructor of PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidential)
{
    if (this != &presidential)
    {
        AForm::operator=(presidential);
        _target = presidential._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    // AForm::beSignedConst(const_cast<Bureaucrat*>(&executor)); //const_cast (temporary remove the const qualifier from the executor)
    // if (AForm::getSigned())
    // {
    //     std::cout << "The " << _target << " has been pardoned by Zaphod Beeblebox" <<std::endl;
    // }
    // else
    //     throw "Try harder next time Bureaucrat";
    if (executor.getGrade() > this->getRequiredGrade())
        throw Form::GradeTooLowException();
    else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor of PresidentialPardonForm called" << std::endl;
}
