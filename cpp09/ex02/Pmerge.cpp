/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:06:18 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/18 09:43:04 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"

// Pmerge::Pmerge() {}
// Pmerge::Pmerge(const Pmerge& other) {(void)other;}
// Pmerge& Pmerge::operator=(const Pmerge& other) {(void)other; return *this;}
// Pmerge::~Pmerge() {}


// bool Pmerge::isStringDigits(std::string str) {
//     for (std::size_t i = 0; i < str.length(); ++i) {
//         if (!std::isdigit(str[i])) {
//             return false;
//         }
//     }
//     return true;
// }

// void    Pmerge::fillContainers(char** av)
// {
//     int i(1);
//     int number;
//     std::string token;
//     while (av[i])
//     {
//         std::istringstream  iss(av[i]);
//         if (std::string(av[i]).find(' ') == std::string::npos)
//         {
//            if (isStringDigits(av[i]) && !std::string(av[i]).empty())
//             {
//                 number = atoi(av[i]);
//                 _myVector.push_back(number);
//                 _myDeque.push_back(number);
//             }
//             else
//             {
//                 std::cout << "Error" << std::endl;
//                 return ;
//             }
//         }
//         else {
//             while (std::getline(iss, token, ' '))
//             {
//                 if (isStringDigits(token) && !token.empty())
//                 {
//                     std::cout << "HOW " + token << std::endl; 
//                     number = stoi(token);
//                     _myVector.push_back(number);
//                     _myDeque.push_back(number);
//                 }
//                 else
//                 {
//                     std::cout << "Error" << std::endl;
//                     return ;
//                 }
//             }
//         }
//         i++;
//     }
//     std::cout << "Before: ";
//     for (std::vector<int>::iterator it = _myVector.begin(); it != _myVector.end(); it++)
//     {
//         std::cout << *it << " ";
//     }
//     std::T::iterator begin = _myVector.begin();
//     std::T::iterator end = _myVector.end();
//     mergeSort(_myVector, begin, end);
//     mergeSort(_myDeque, begin, end);
//     // std::cout << "" << std::endl;
//     // std::cout << ": ";
//     // for (std::deque<int>::iterator zt = _myDeque.begin(); zt != _myDeque.end(); zt++)
//     // {
//     //     std::cout << *zt << " ";
//     // }
    
// }

// template <typename T>
// void    Pmerge::mergeSort(T array, typename T::iterator begin, typename T::iterator end)
// {
//     if (begin >= end)
//         return ;
//     int mid = (end - begin) / 2;
//     mergeSort(array, begin, mid); // lwl
//     mergeSort(array, mid + 1, end); // tani
//     // merge(array, begin, mid, end);
// }