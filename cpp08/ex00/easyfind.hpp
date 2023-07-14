/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:41:18 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 15:06:30 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>

template <typename T>
void   easyfind(T container, int second)
{
    int i(0);
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == second)
            i++;
    }
    if (!i)
        throw std::string("No occurrence found !");
    else
        throw std::string("Occurrence found !");
}