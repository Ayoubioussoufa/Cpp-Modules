/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:32:33 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 09:53:42 by aybiouss         ###   ########.fr       */
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
        Bureaucrat plop(1, "AHMEAD");
        form1.execute(plop);
        std::cout << "-------------" << std::endl;
        RobotomyRequestForm form2("moi");
        form2.execute(plop);
        std::cout << "-------------" << std::endl;
        form2.execute(plop);
        std::cout << "-------------" << std::endl;
        PresidentialPardonForm form3("moiiiity");
        form3.execute(plop);
        std::cout << "-------------" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}