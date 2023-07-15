/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:27:46 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/15 08:23:03 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stack>
#include <vector>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>, std::vector<T>
{
    private:
        typedef typename std::stack<T>   _mystack;
        typedef typename std::vector<T>   _myvector;
        _mystack&   _stack;
        _myvector   _element;
    public:
        MutantStack() : _stack(*this) {};
        // typedef typename _mystack::container_type::iterator iterator;
        // MutantStack(const MutantStack& other);
        // MutantStack& operator=(const MutantStack& other);
        typedef typename _myvector::iterator iterator;
        void push(T number)
        {
            _element.insert(_element.begin(), number);
        }
        void pop(void)
        {
            _element.erase(_element.begin());
        }
        iterator begin()
        {
            return _element.begin();
        }
        iterator end()
        {
            return _element.end();
        }
        int top(void)
        {
            typename _myvector::iterator it = _element.begin();
            return (*it);
        }
        int size(void)
        {
            int i(0);
            for (typename _myvector::iterator it = this->_element.begin(); it != _element.end(); it++)
            {
                i++;
            }
            return (i);
        }
        ~MutantStack() {}
};

/**/

/*template <typename T>
class MutantStack
{
    private:
        typedef typename std::stack<T>   _mystack;
        typedef typename std::vector<T>   _myvector;
        _mystack&   _stack;
        _myvector   _element;
    public:
        MutantStack<T>();
        // MutantStack(const MutantStack& other);
        // MutantStack& operator=(const MutantStack& other);
        void push(T number)
        {
            _element.insert(_element.begin(), number);
        }
        void pop(void)
        {
            _element.erase(_element.begin());
        }
        typename    std::vector<T>::iterator begin()
        {
            return _element.begin();
        }
        typename    std::vector<T>::iterator end()
        {
            return _element.end();
        }// all fnuctions above arent done yet
        void top(void);
        int size(void);
        ~MutantStack();
};*/