/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:39:19 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 09:00:12 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T c;

    c = a;
    a = b;
    b = c;
}

template <typename T>
T   min(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T>
T   max(T a, T b)
{
    return (a > b) ? a : b;
}