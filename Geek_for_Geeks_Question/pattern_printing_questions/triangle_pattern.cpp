// program to make a triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from the user

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
    return 0;
}