// program to convert binary number to decimal number conversion
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    int num = 1010;   // declaration
    int num1 = num;   // declaration
    int value, count; // declaration
    while (num > 0)
    { // function for counting the digit of a number
        int rem = num % 10;
        count++;
        num = num / 10;
    }
    for (int i = 0; i < count; i++)
    { // condition for binary to decimal
        int rem = num1 % 10;
        num1 = num1 / 10;
        int power = pow(2, i);
        value = value + (rem * power);
    }
    cout << value;
    return 0;
}