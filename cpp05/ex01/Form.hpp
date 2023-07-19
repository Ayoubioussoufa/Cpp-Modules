/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 08:34:01 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _grade;
        const int _requiredGrade;
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
        Form();
        Form(std::string name, int grade, int requiredGrade);
        Form(const Form& form);
        Form& operator=(const Form& form);
        std::string const getName() const;
        bool getSigned() const;
        int getGrade() const;
        int getRequiredGrade() const;
        void beSigned(const Bureaucrat& bur);
        ~Form();
};

std::ostream& operator<<(std::ostream& o, Form& form);