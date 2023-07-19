/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:27:18 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 18:35:21 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor of Bureaucrat is called." << std::endl;
}

Bureaucrat::Bureaucrat(int grade, const std::string name) : _name(name), _grade(grade)
{
    std::cout << "Parametrized constructor of Bureaucrat is called." << std::endl;
    if (_grade < 1) 
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bur) : _name(bur.getName()), _grade(bur.getGrade())
{
    std::cout << "Copy constructor of Bureaucrat called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bur)
{
    std::cout << "Copy assignment operator of Bureaucrat called" << std::endl;
    _grade = bur.getGrade();
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

std::ostream& operator<<(std::ostream &o, Bureaucrat& bur)
{
    return (o << bur.getName() << ", bureaucreat grade " << bur.getGrade());
}