/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:32:33 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 08:07:19 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat burea(160, "d");
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bureau(150, "PLOP");
        std::cout << bureau << std::endl;
        bureau.decrementGrade();
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat burau(0, "f");
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}