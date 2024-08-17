/*
Problem Statement



Rakesh is learning about basic arithmetic operations in his mathematics class. He decided to write a program to help him practice these operations. He wants the program to perform the following operations on two integers: addition, subtraction, multiplication, division, and modulus.



Your task is to help Rakesh by writing a program that takes two integers as input and performs these arithmetic operations, displaying the results for each operation. Additionally, Rakesh wants you to create a class named Operation and use inline functions to perform each arithmetic operation.



Note: This is a sample question asked in a TCS interview.
*/

#include <iostream>
using namespace std;
class Operation
{
public:
    int num1, num2;
    inline int operations()
    {
        cout << "Addition of two numbers: " << num1 + num2 << endl;
        cout << "Difference of two numbers: " << num1 - num2 << endl;
        cout << "Product of two numbers: " << num1 * num2 << endl;
        cout << "Division of two numbers: " << num1 / num2 << endl;
        cout << "Modulus of two numbers: " << num1 % num2 << endl;
    }
};
int main()
{

    int a;
    cin >> a;
    int b;
    cin >> b;
    Operation o1;
    o1.num1 = a;
    o1.num2 = b;
    o1.operations();
};