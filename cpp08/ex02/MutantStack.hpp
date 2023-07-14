/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:27:46 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 17:41:19 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack
{
    private:
        T   container;
    public:
        MutantStack();
        MutantStack(const MutantStack& other);
        MutantStack& operator=(const MutantStack& other);
        void push(T number)
        {
            
        }
        void pop(T number)
        {
            
        }
        void top(void);
        int size(void);
        ~MutantStack();
};