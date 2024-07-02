// program to check whether a number is a prime number or not
#include <iostream>
using namespace std;
int main()
{
    int a, count; // declaration
    cout << "enter the number you wanna check : ";
    cin >> a; // taking input from the user

    for (int i = 1; i <= a; i++) // loop condition for counting number of factors
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count > 2) // condition for checking whether its prime or not
    {
        cout << "not a prime number";
    }
    else
    {
        cout << "it is a prime number";
    }
    return 0;
}