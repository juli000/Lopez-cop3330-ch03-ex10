/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julio Lopez
 */
#include "std_lib_facilities.h"

int main()
{
    string operation;
    double first = 0;
    double second = 0;
    cout << "Enter an operator followed by a space then enter the two numbers you wish to use with a space between them: ";
    double tot = 0;
    cin >> operation >> first >> second;
    if (operation == "plus" || operation == "+")
        tot = first + second;
    else if (operation == "minus" || operation == "-")
        tot = first - second;
    else if (operation == "mul" || operation == "*")
        tot = first * second;
    else if (operation == "div" || operation == "/")
        tot = first / second;
    else
        error("Invalid operator: ", operation);
    cout << first << " " << operation << " " << second << " = " << tot << '\n';
    return 0;
}