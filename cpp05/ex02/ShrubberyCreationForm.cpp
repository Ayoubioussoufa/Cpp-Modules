/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:19:48 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 09:24:20 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default constructor of ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{
    std::cout << "Parametrized constructor of ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrub) : AForm(shrub), _target(shrub._target)
{
    std::cout << "Copy constructor of ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrub)
{
    if (this != &shrub)
    {
        AForm::operator=(shrub);
        _target = shrub._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    AForm::beSignedConst(const_cast<Bureaucrat*>(&executor)); //const_cast (temporary remove the const qualifier from the executor) is a C++ type casting operator that allows you to cast away the const qualifier from a pointer or reference. In this case, it's used to remove the const qualifier from the pointer &executor, which is of type const Bureaucrat*. By doing this, we obtain a pointer of type Bureaucrat*
    if (AForm::getSigned())
    {
        std::string plop = _target + "_shrubbery";
        std::ofstream   outFile(plop.c_str()); //.c_str() allows you to convert std::string to const char* when interaction with functions that expect C-style strings.
        if (!outFile)
        {
            std::cerr << "Failed to open file: " << outFile << std::endl;
            return ;
        }
        outFile <<  "      *\n" 
                    "     ***\n" 
                    "    *****\n" 
                    "   *******\n" 
                    "  *********\n" 
                    " ***********\n" 
                    "*************\n" 
                    "     ||| " << std::endl;
    }
    else
        throw "Try harder next time Bureaucrat";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor of ShrubberyCreationForm called" << std::endl;
}
