#include <iostream>
using namespace std;

int main()
{
    int a, rev; // declaration
    cout << "enter the number : ";
    cin >> a;     // taking input from user
    while (a > 0) // applying while loop condition for making a number reverse
    {
        int rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    cout << rev; // output
    return 0;
}