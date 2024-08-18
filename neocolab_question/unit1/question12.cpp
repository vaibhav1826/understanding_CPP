/*
Problem statement



Emily is a mathematics enthusiast who loves exploring the world of numbers. Recently, she decided to create a program to calculate the factorial of a given number. She implemented a function called factorial() that takes an integer as an argument and uses the concept of call by value to calculate the factorial.



Whenever Emily calls the factorial function with a specific number, it performs the necessary calculations to find the factorial of that number.



Emily's program allows users to easily find the factorial of any number by simply providing the number as an argument to the factorial function. This way, they can quickly obtain the result without needing to implement complex factorial calculations themselves.



Note: This is a sample question asked in a TCS interview.
*/

#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    cout << fact;
};

int main()
{
    int num1;
    cin >> num1;
    factorial(num1);
    return 0;
};