/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:32:33 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 10:03:47 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try 
    {
        ShrubberyCreationForm form1("me");
        std::cout << form1 << std::endl;
        Bureaucrat plop(1, "AHMED");
        plop.executeForm(form1);
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "*****************" << std::endl;
    try 
    {
        Bureaucrat plop(1, "AHMED");
        RobotomyRequestForm form2("Robotomy");
        std::cout << form2 << std::endl;
        plop.executeForm(form2);
        std::cout << "-------------" << std::endl;
        plop.executeForm(form2);
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "*****************" << std::endl;
    try {
        Bureaucrat plop(1, "AHMED");
        PresidentialPardonForm form3("Presidential");
        std::cout << form3 << std::endl;
        plop.executeForm(form3);
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}