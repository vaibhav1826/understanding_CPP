// program of making a simple calculator
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter the first number : ";
    cin >> num1;
    char a;
    cout << "enter the operation you wanna do : ";
    cin >> a;
    cout << "enter the second number : ";
    cin >> num2;

    switch (a)
    {
    case '+':
        cout << "addition : " << num1 + num2;
        break;
    case '-':
        cout << "subtraction : " << num1 - num2;
        break;
    case '*':
        cout << "multiplication : " << num1 * num2;
        break;
    case '/':
        cout << "division : " << num1 / num2;
        break;
    default:
        cout << "invalid operator! please choose some valid operator ";
    }

    return 0;
}