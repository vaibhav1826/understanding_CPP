// program to do the sum of natural number using recursion
#include <iostream>
using namespace std;
// user defined function
int sum(int a)
{

    if (a <= 1)
    {
        return a;
    }
    else
    {
        return a + sum(a - 1); // recursion - which is function inside a function
    }
}

// main code
int main()
{
    int num; // declaration
    cout << "enter the number : ";
    cin >> num;       // taking input from the user
    cout << sum(num); // calling the user defined function
}