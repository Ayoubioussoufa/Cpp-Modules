/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:02:01 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 09:54:48 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void    function(T element)
{
    std::cout << "Processing : " << element << std::endl;
}

template <typename T>
void    iter(T* array, T length, void (*function)(T)) //address of an array ?
{
    for(T i = 0; i < length; i++)
        function(array[i]);
}