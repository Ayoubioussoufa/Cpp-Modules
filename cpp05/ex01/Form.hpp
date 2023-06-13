/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:25:58 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/13 18:29:14 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool _signed;
        int _grade;
        int _requiredGrade;
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
        std::string const getName();
        int getSigned();
        int getGrade();
        int GetRequiredGrade();
        void beSigned(Bureaucrat* bur);
        ~Form();
};

std::ostream& operator<<(std::ostream& o, Form& form);