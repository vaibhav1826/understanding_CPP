// program to print the fibanocci series using the function
#include <iostream>
using namespace std;
// user defined function
int fibanocci(int num)
{
    int a = 0, b = 1, sum;
    for (int i = 0; i <= num; i++) // condition for fibanocci series
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        sum = a;
    }
}
// main code
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from the user
    fibanocci(a);
}