// program to make a triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from the user
    // condition for making diamond pattern
    for (int i = 1; i <= a; i++) // condition for making the triangle pattern
    {
        for (int j = a; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int m = 1; m <= i - 1; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= a; i++) // condition for making the making invert triangle pattern
    {

        for (int k = 1; k <= i - 1; k++)
        {
            cout << " ";
        }
        for (int m = a; m > i; m--)
        {
            cout << "*";
        }
        for (int m = a; m > i - 1; m--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}