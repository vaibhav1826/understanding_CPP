// check whether a number is a neon number or not
#include <iostream>
using namespace std;

int main()
{
    int a, rev; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from user
    int num = a;
    int power = a * a;
    while (power > 0) // applying while loop condition for making the sum of digit
    {
        int rem = power % 10;
        rev = rev + rem;
        power = power / 10;
    }

    if (num == rev) // condition for making its a neon or not
    {
        cout << "its a neon number";
    }
    else
    {
        cout << "its not a neon number";
    }
    return 0;
}