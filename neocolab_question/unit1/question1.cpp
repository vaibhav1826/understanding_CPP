/*
Problem Statement



Imagine you are developing a math learning application that helps students practice finding the greatest common divisor (GCD) of two numbers.



Your task is to write a program that prompts the user to enter two integers, calculates the GCD using an inline function gcd, and displays the result. This program will provide students with an interactive way to practice and improve their understanding of the GCD concept.



Note: This is a sample question asked in a Capgemini interview.
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
inline int find(int a, int b)
{
    cout << __gcd(a, b);
};
int main()
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    find(num1, num2);
};