// program to print butterfly pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << " enter the number : ";
    cin >> a; // input from user

    for (int i = 1; i <= a; i++) // condition for making pattern
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int b = a - 1; b >= i; b--)
        {
            cout << " ";
        }
        for (int c = a - 1; c >= i; c--)
        {
            cout << " ";
        }
        for (int d = 1; d <= i; d++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = a - 1; j >= i; j--)
        {
            cout << "*";
        }
        for (int e = 1; e <= i; e++)
        {
            cout << " ";
        }
        for (int f = 1; f <= i; f++)
        {
            cout << " ";
        }
        for (int g = a - 1; g >= i; g--)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
