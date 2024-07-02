// program to find gcd of a number provided by the user
#include <iostream>
using namespace std;
int main()
{
    int a, b, i, gcd; // declaration
    cout << "enter the number : ";
    cin >> a >> b; // taking input from user

    for (i = 1; i <= a && i <= b; i++) // for loop condition for finding gcd
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}