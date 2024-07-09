// program to convert the octal number to decimal number
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    int num = 55;     // declaration
    int num1 = num;   // declaration
    int value, count; // declaration
    while (num > 0)
    { // function for counting the digit of a number
        int rem = num % 10;
        count++;
        num = num / 10;
    }
    for (int i = 0; i < count; i++)
    { // condition for octal to decimal
        int rem = num1 % 10;
        num1 = num1 / 10;
        int power = pow(8, i);
        value = value + (rem * power);
    }
    cout << value;
    return 0;
}