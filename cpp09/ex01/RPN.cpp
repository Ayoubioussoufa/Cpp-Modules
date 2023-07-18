/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:36:11 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/17 14:05:34 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN& other) {(void)other;}
RPN& RPN::operator=(const RPN& other) {(void)other; return *this;}
RPN::~RPN() {}

void    RPN::fillStack(std::string av)
{
    std::istringstream iss(av);
    std::string token;
    int j(0);
    int i(0);
    while (std::getline(iss, token, ' '))
    {
        if (!token.empty() && token[0] != ' ')
        {
            if (isdigit(token[0]))
            {
                i = 0;
                while (isdigit(token[i]))
                    i++;
                if (i > 1)
                {
                    std::cout << "Error: Number is superior than 9" << std::endl;
                    return ;
                }
                else
                {
                    j = stoi(token);
                    _myStack.push(j);
                }
            }
            else if (_myStack.size() >= 2 && ((token[0] == '+' || token[0] == '-' || token[0] == '/' || token[0] == '*') && !token[1])) //mkhwra ila kano mlas9in.
            { //sinon its good !! 
                int total = 0;
                int top_element1 = _myStack.top();
                _myStack.pop();
                int top_element2 = _myStack.top();
                _myStack.pop();
                if (token[0] == '+')
                    total = top_element2 + top_element1;
                else if (token[0] == '-')
                    total = top_element2 - top_element1;
                else if (token[0] == '/')
                {
                    if (top_element1 != 0)
                        total = top_element2 / top_element1;
                    else
                    {
                        std::cout << "No division by 0" << std::endl;
                        return ;
                    }     
                }
                else if (token[0] == '*')
                    total = top_element2 * top_element1;
                _myStack.push(total);
            }
            else
            {
                std::cout << "Error" << std::endl;
                return ;
            }
        }
    }
    int top_element = _myStack.top();
    std::cout << top_element << std::endl;
    // _myStack.pop();
    //in case khass ib9a gha wa7d f stack howa result, nkhrj error if stack.size > 0
}