/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:52 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 08:14:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _signed(false)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int grade, int requiredGrade) : _name(name), _signed(false), _grade(grade), _requiredGrade(requiredGrade)
{
    std::cout << "Parametrized Constructor called" << std::endl;
}

Form::Form(const Form& form)
{
    std::cout << "Copy Constructor called" << std::endl;
    if (this != &form)
        *this = form;
}

Form& Form::operator=(const Form& form)
{
    std::cout << "Assignment operator called" << std::endl;
    _name = form._name;
    _signed = form._signed;
    _grade = form._grade;
    _requiredGrade = form._requiredGrade;
    return *this;
}

std::string const Form::getName()
{
    return _name;
}

int Form::getSigned()
{
    return _signed;
}

int Form::getGrade()
{
    return _grade;
}

int Form::getRequiredGrade()
{
    return _requiredGrade;
}

Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat* bur)
{
    if (bur->getGrade() <= _requiredGrade)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, Form& form)
{
    return (o << "Form named " << form.getName()
        << ", the required Grade to sign is: " << form.getGrade()
        << ", the reaquired Grade to execute is: " << form.getRequiredGrade()
        << "Signature: " << form.getSigned());
}