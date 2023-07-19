/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:52 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 21:38:21 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() : _signed(false)
{
    std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int grade, int requiredGrade) : _name(name), _signed(false), _grade(grade), _requiredGrade(requiredGrade)
{
    std::cout << "Parametrized Constructor of Aform called" << std::endl;
}

AForm::AForm(const AForm& AForm)
{
    std::cout << "Copy Constructor called" << std::endl;
    if (this != &AForm)
        *this = AForm;
}

AForm& AForm::operator=(const AForm& AForm)
{
    std::cout << "Assignment operator called" << std::endl;
    _name = AForm._name;
    _signed = AForm._signed;
    _grade = AForm._grade;
    _requiredGrade = AForm._requiredGrade;
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

int AForm::getGrade()
{
    return _grade;
}

int AForm::getRequiredGrade()
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