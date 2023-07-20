/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/20 06:36:10 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade;
        const int _requiredGrade;
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
        int getGrade() const;
        int getRequiredGrade() const;
        void beSigned(Bureaucrat* bur);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void beSignedConst(Bureaucrat* bur) const;
        ~AForm();
};

std::ostream& operator<<(std::ostream& o, AForm& form);