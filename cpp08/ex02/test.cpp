/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:45:26 by aybiouss          #+#    #+#             */
/*   Updated: 2023/07/14 17:46:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template <typename Container>
class Stack {
private:
    Container stack;

public:
    void push(typename Container::value_type element) {
        stack.push_back(element);
    }

    typename Container::value_type pop() {
        typename Container::value_type element = stack.back();
        stack.pop_back();
        return element;
    }

    typename Container::value_type peek() {
        return stack.back();
    }

    bool empty() const {
        return stack.empty();
    }
};

int main() {
    Stack<std::vector<int> > myStack;  // Example using std::vector as the container

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Inserting a new element at the top of the stack
    int newElement = 4;
    myStack.push(newElement);

    // Peek the top element
    std::cout << "Top element: " << myStack.peek() << std::endl;
std::cout << "************************" << std::endl;
    Stack<std::stack<int> > sttack;  // Example using std::vector as the container

    sttack.push(1);
    sttack.push(2);
    sttack.push(3);

    // Inserting a new element at the top of the stack
    int newElement = 4;
    sttack.push(newElement);

    // Peek the top element
    std::cout << "Top element: " << sttack.peek() << std::endl;

    return 0;
}
