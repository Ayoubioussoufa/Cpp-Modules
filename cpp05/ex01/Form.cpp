/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:52 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/20 06:28:39 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _signed(false), _grade(0), _requiredGrade(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int grade, int requiredGrade) : _name(name), _signed(false), _grade(grade), _requiredGrade(requiredGrade)
{
    if (_grade < 1) 
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
    std::cout << "Parametrized Constructor called" << std::endl;
}

Form::Form(const Form& form) : _name(form.getName()), _signed(form.getSigned()), _grade(form.getGrade()), _requiredGrade(form.getRequiredGrade())
{
    std::cout << "Copy Constructor called" << std::endl;
}

Form& Form::operator=(const Form& form)
{
    std::cout << "Assignment operator called" << std::endl;
    _signed = form._signed;
    return *this;
}

std::string const Form::getName() const
{
    return _name;
}

bool Form::getSigned() const
{
    return _signed;
}

int Form::getGrade() const
{
    return _grade;
}

int Form::getRequiredGrade() const
{
    return _requiredGrade;
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat& bur)
{
    if (bur.getGrade() <= this->_grade)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, Form& form)
{
    return (o << "Form named " << form.getName()
        << ", the required Grade to sign is: " << form.getGrade()
        << ", the required Grade to execute is: " << form.getRequiredGrade()
        << ", Signature: " << form.getSigned());
}