/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:40:59 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 12:39:02 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <exception>

int main()
{
    //VECTOR
    std::vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    try {
         easyfind(myvector, 5);
    }
    catch(std::string& e)
    {
        std::cout << e << std::endl;
    }
    // DEQUE
    std::deque<int> mydeque;
    mydeque.push_back(1);
    mydeque.push_back(2);
    mydeque.push_back(3);
    try {
        easyfind(mydeque, 2);
    }
    catch(std::string& e)
    {
        std::cout << e << std::endl;
    }
    // LIST
    std::list<int> mylist;
    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    try {
        easyfind(mylist, 2);
    }
    catch(std::string& e)
    {
        std::cout << e << std::endl;
    }
    // ARRAY
    std::array<int, 3> myarray = {1,2,3};
    try {
        easyfind(myarray, 4);
    }
    catch(std::string& e)
    {
        std::cout << e << std::endl;
    }
}