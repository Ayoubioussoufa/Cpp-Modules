/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:06:15 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/18 14:50:28 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"
#include <iomanip>

int main(int ac, char **av)
{
    Pmerge<std::vector<int> > _vector;
    Pmerge<std::deque<int> > _deque;
    // Pmerge<deque> p;
    
    clock_t star = clock();
    _deque.fillContainers(av);
    _deque.iterateBefore();
    _deque.mergeSorting();
    clock_t en = clock();
    double duratio = static_cast<double>(en - star) / CLOCKS_PER_SEC;
    clock_t start = clock();
    _vector.fillContainers(av);
    _vector.mergeSorting();
    clock_t end = clock();
    std::cout << "After : ";
    for (std::vector<int>::iterator it = _vector._myContainer.begin(); it != _vector._myContainer.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << std::fixed << std::setprecision(5) << "Duration : " << duratio << "us"  << std::endl;
    std::cout << std::fixed << std::setprecision(5) << "Duration : " << duration << "us" << std::endl;
    (void)ac;
}   