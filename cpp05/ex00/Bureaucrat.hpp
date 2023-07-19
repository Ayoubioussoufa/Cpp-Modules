/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:14:27 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/19 18:34:14 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        Bureaucrat();
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
        Bureaucrat(int grade, std::string name);
        Bureaucrat(const Bureaucrat& bur);
        Bureaucrat& operator=(const Bureaucrat& bur);
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &o, Bureaucrat& bur);