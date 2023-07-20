/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:26:19 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/20 19:46:06 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base {
    public:
        int number;
};

class B : public Base {
    public:
        int number;
};

class C : public Base {
    public:
        int number;
};