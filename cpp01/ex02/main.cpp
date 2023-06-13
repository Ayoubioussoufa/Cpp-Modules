/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:44:18 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/08 11:08:01 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string name = "HI THIS IS BRAIN";
    std::string* ptr;
    std::string& ref = name;

    ptr = &name;
    std::cout << "The memory address of the string variable: \t" << &name << std::endl;
    std::cout << "The memory address held by stringPTR: \t\t" << ptr << std::endl;
    std::cout << "The memory address held by stringREF: \t\t" << &ref << std::endl;
    std::cout << "The value of the string variable: \t" << name << std::endl;
    std::cout << "The value held by stringPTR: \t\t" << *ptr << std::endl;
    std::cout << "The value held by stringREF: \t\t" << ref << std::endl;
}