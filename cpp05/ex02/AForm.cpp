/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:52 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/20 06:31:47 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() : _signed(false), _grade(0), _requiredGrade(0)
{
    std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int grade, int requiredGrade) : _name(name), _signed(false), _grade(grade), _requiredGrade(requiredGrade)
{
    if (_grade < 1) 
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    std::cout << "Parametrized Constructor of Aform called" << std::endl;
}

AForm::AForm(const AForm& AForm) : _name(AForm.getName()), _signed(AForm.getSigned()), _grade(AForm.getGrade()), _requiredGrade(AForm.getRequiredGrade())
{
    std::cout << "Copy Constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& AForm)
{
    std::cout << "Assignment operator called" << std::endl;
    _signed = AForm._signed;
    return *this;
}

std::string const AForm::getName() const
{
    return _name;
}

int AForm::getSigned() const
{
    return _signed;
}

int AForm::getGrade() const
{
    return _grade;
}

int AForm::getRequiredGrade() const
{
    return _requiredGrade;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor called" << std::endl;
}

void    AForm::beSignedConst(Bureaucrat* bur) const
{
    const_cast<AForm*>(this)->beSigned(bur);
}

void AForm::beSigned(Bureaucrat* bur)
{
    if (bur->getGrade() <= _grade)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, AForm& AForm)
{
    return (o << "AForm named " << AForm.getName()
        << ", the required Grade to sign is: " << AForm.getGrade()
        << ", the required Grade to execute is: " << AForm.getRequiredGrade()
        << ", Signature: " << AForm.getSigned());
}