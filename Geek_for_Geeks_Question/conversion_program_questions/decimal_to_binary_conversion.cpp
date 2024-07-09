// program to convert the decimal number to binary number
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    int num = 55;   // declaration
    int num1 = num; // declaration
    int count;      // declaration

    while (num > 0)
    { // function for counting the digit of a number
        int rem = num % 10;
        count++;
        num = num / 10;
    }
    int binary; // declaration

    for (int i = 0; num1 > 0; i++)
    { // condition for converting in binary number but in reverse way
        int rem = num1 % 2;
        binary = binary * 10 + rem;
        num1 = num1 / 2;
    }

    int binary_number; // declaration

    while (binary > 0)
    { // reversing the number and making a complete binary number
        int rem = binary % 10;
        binary_number = binary_number * 10 + rem;
        binary = binary / 10;
    }
    cout << binary_number;
    return 0;
}