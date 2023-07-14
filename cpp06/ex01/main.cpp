/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:43:17 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 08:25:03 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

int main(void)
{
    Data data;

    data.number = 10;
    std::cout << "The original value : " << data.number << std::endl;
    uintptr_t ptr = Serializer::serialize(&data);
    std::cout << "The memory address where the variable is stored in memory : ";
    std::cout << ptr << std::endl;
    Data* d = Serializer::deserialize(ptr);
    std::cout << "The value of deserialization : " << d->number << std::endl;
}