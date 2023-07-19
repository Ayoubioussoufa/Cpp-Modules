/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 21:50:48 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool _signed;
        int _grade;
        int _requiredGrade;
        AForm();
    public:
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Grade is too high";
            } 
        };
        class GradeTooLowException : public std::exception {
           public:
            const char* what() const throw() {
                return "Grade is too low";
            } 
        };
        class NotSignedException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Form not signed";
                }
        };
        AForm(std::string name, int grade, int requiredGrade);
        AForm(const AForm& AForm);
        AForm& operator=(const AForm& AForm);
        std::string const getName() const;
        int getSigned() const;
        int getGrade();
        int getRequiredGrade();
        void beSigned(Bureaucrat* bur);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void beSignedConst(Bureaucrat* bur) const;
        ~AForm();
};

std::ostream& operator<<(std::ostream& o, AForm& form);