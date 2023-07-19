/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:32:33 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 08:53:34 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try 
    {
        Form form("Form", 10, 40);
        std::cout << form << std::endl;
        Bureaucrat clerk(1, "Clerk1");
        clerk.signForm(form);
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Form::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "*****************" << std::endl;
    try 
    {
        Form form2("Form", 150, 51);
        std::cout << form2 << std::endl;
        Bureaucrat cler(100, "Clerk");
        cler.signForm(form2);
    }
    catch (const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Form::GradeTooHighException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Form::GradeTooLowException& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
