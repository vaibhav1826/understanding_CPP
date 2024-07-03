// program to print a zig zag pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from user

    for (int i = 1; i <= a; i++) // condition for making the zig zag pattern
    {
        for (int j = a; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            if (k == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int m = 1; m <= i; m++)
        {
            if (m == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int n = a; n >= i; n--)
        {

            cout << " ";
        }
        for (int o = a - 1; o >= i - 1; o--)
        {
            if (o == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int r = 1; r <= i - 1; r++)
        {
            cout << " ";
        }
        for (int s = 1; s <= i; s++)
        {
            if (s == i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}