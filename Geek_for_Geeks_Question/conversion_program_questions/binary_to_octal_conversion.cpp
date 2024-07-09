// program to convert the binary number to octal conversion
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

    int octal; // declaration

    for (int i = 0; value > 0; i++)
    { // condition for converting in octal number but in reverse way
        int rem = value % 8;
        octal = octal * 10 + rem;
        value = value / 8;
    }

    int octal_number; // declaration

    while (octal > 0)
    { // reversing the number and making a complete octal number
        int rem = octal % 10;
        octal_number = octal_number * 10 + rem;
        octal = octal / 10;
    }
    cout << octal_number;
    return 0;
}