/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:33:38 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 11:05:14 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor of Intern called" << std::endl;
}

Intern::Intern(const Intern& intern)
{
    std::cout << "Copy constructor of Intern called" << std::endl;
    if (this != &intern)
        *this = intern;
}

Intern& Intern::operator=(const Intern& intern)
{
    (void)intern;
    std::cout << "Copy assignment operator of Intern called" << std::endl;
    return *this;
}

AForm* Intern::makeForm(const std::string& nameForm, const std::string& targetForm) const
{
    int i;
    std::string    ptr[3] = {"Shrubbery Creation", "Robotomy request", "Presidential Pardon"};
    
    for (i = 0; i < 4; i++)
    {
        if (ptr[i] == nameForm)
            break ;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern created " << nameForm << std::endl;
            return new ShrubberyCreationForm(targetForm);
        case 1:
            std::cout << "Intern created " << nameForm << std::endl;
            return new RobotomyRequestForm(targetForm);
        case 2:
            std::cout << "Intern created " << nameForm << std::endl;
            return new PresidentialPardonForm(targetForm);
        default:
            std::cout << "Intern couldn't create form " << std::endl;
    }
    return NULL;
}

Intern::~Intern()
{
    std::cout << "Destructor of Intern called" << std::endl;
}
