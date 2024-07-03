// program to print the prime number betwwen the given range
#include <iostream>
using namespace std;
// user defined function for checking whether its a prime or not
int primenumber(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    { // condition for checking whether its a prime number or not
        if (num % i == 0)
        {
            count = count + 1;
        }
    }
    if (count <= 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// main code
int main()
{
    int a, b; // declaration
    cout << "enter the 1st number : ";
    cin >> a; // taking input from the user
    cout << "enter the 2nd number : ";
    cin >> b; // taking input from the user
    for (int i = a; i < b; i++)
    { // for-loop condition
        if (primenumber(i) == true)
        {
            cout << i << " ";
        }
    }
}