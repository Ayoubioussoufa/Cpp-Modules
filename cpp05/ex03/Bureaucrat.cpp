/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:27:18 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 09:40:36 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor of Bureaucrat is called." << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade)
{
    std::cout << "Parametrized constructor of Bureaucrat is called." << std::endl;
    if (_grade < 1) 
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bur)
{
    std::cout << "Copy constructor of Bureaucrat called" << std::endl;
    if (this != &bur)
        *this = bur;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bur)
{
    std::cout << "Copy assignment operator of Bureaucrat called" << std::endl;
    this->_name = bur.getName();
    this->_grade = bur.getGrade();
    return *this;
}

const std::string& Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor of Bureaucrat is called." << std::endl;
}

void Bureaucrat::signForm(AForm& form)
{
    try {
        form.beSigned(this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch (const AForm::GradeTooLowException& e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream &o, Bureaucrat& bur)
{
    return (o << bur.getName() << ", bureaucreat grade " << bur.getGrade());
}