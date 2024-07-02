// program whether a number is a palidrome or not
#include <iostream>
using namespace std;

int main()
{
    int a, rev; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from user
    int num = a;
    while (a > 0) // applying while loop condition for making a number reverse
    {
        int rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    if (num == rev)
    { // condition for checking whether its a palidrome or not
        cout << "number is a palidrome";
    }
    else
    {
        cout << "number is not a palidrome";
    }
    return 0;
}