/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:26:19 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 08:32:27 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Base
{
    public:
        Base();
        Base* generate(void);
        void identify(Base* p);
        void identify(Base& p);
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