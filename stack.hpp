//
// Created by Iris L on 2018-09-28.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#include <iostream>
#include <string>
using namespace std;
//The size of the stack_array
constexpr int max_size = 10;

//Characteristics of class stack
class Stack{
private:
    int stack_array[max_size];
    int stack_top;
public:
    //default constructor
    Stack();
    //member functions
    bool push(int n);
    bool pop();
    int top() const;
    bool empty() const;
    bool full() const;
    string print() const;
};


#endif //LAB3_STACK_HPP
