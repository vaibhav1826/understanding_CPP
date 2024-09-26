/*
Problem Statement



You need to implement a program that uses a class Inte﻿ger to manage integer values. The class should utilize an initializer list to set the integer value, and in the main function, an array of Integer objects is created based on user input. For every even index, assign a value of 10, and display all values in the array.
*/

#include <iostream>
using namespace std;
class Integer
{
public:
    void display()
    {
        cout << "0" << endl;
    };
    void display1()
    {
        cout << "10" << endl;
    };
};

int main()
{
    int a;
    cin >> a;
    Integer i1;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            i1.display1();
        }
        else
        {
            i1.display();
        }
    }
};