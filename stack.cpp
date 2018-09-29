//
// Created by Iris L on 2018-09-28.
//
#include <sstream>
#include "stack.hpp"

//Default constructor that sets stack_top to -1
Stack::Stack(){stack_top = -1;}

//Function that puts an int to the top of the stack_array
bool Stack::push(int n) {
    if(!Stack::full()){
        stack_array[++stack_top] = n;
        return true;
    }
    return false;
}

//Function that deducts the value of top index to be replaced
bool Stack::pop() {
    if (stack_top > -1) {
        stack_top--;
        return true;
    }
    return false;
}

//Function that returns the value at the top of the stack
int Stack::top() const {
    return stack_array[stack_top];
}

//Function that identifies if the stack is empty
bool Stack::empty() const {
    return stack_top == -1;
}

//Function that identifies if the stack is full
bool Stack::full() const {
    return stack_top == (max_size - 1);
}

//Prints the values in stack and returns "empty" when stack is empty
string Stack::print() const {
    stringstream ss;
    string s;
    if(!empty()) {
        for (int i = 0; i <= stack_top; i++) {
            ss << stack_array[i];
        }
    } else {
        ss << "empty";
    }

    s = ss.str();
    return s;
}
