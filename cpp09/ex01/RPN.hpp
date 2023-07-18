/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:36:05 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/17 12:22:09 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stack>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class RPN
{
    private:
        std::stack<int> _myStack;
    public:
        RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);
        void    fillStack(std::string av);
        ~RPN();
};