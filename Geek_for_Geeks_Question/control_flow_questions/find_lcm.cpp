// program to find the lcm of two number
#include <iostream>
using namespace std;
// user define function
int gcd(int a, int b)
{
    int gcd; // declaration

    for (int i = 1; i <= a; i++) // for loop conditon for gcd
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd; // return the value
}
// main code
int main()
{
    int num1, num2; // declaration
    cout << "enter 1st number : ";
    cin >> num1; // taking input from user
    cout << "enter 2nd number : ";
    cin >> num2; // taking input from user
    cout << "the lcm of two number is : " << (num1 * num2) / gcd(num1, num2);
    return 0;
}