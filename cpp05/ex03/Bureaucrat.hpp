/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:14:27 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/14 14:42:38 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw(){
                    return "Grade is too high";
            } 
        };
        class GradeTooLowException : public std::exception {
           public:
            const char* what() const throw(){
                return "Grade is too low";
            } 
        };
        Bureaucrat();
        Bureaucrat(int grade, std::string name);
        Bureaucrat(const Bureaucrat& bur);
        Bureaucrat& operator=(const Bureaucrat& bur);
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(AForm& form);
        void executeForm(AForm const & form);
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &o, Bureaucrat& bur);

#endif