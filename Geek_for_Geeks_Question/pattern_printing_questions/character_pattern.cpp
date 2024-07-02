// program to print a character right triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << " enter the number : ";
    cin >> a; // input from user
    char character = 'A';

    for (int i = 1; i <= a; i++) // condition for making pattern
    {
        for (int j = 1; j <= i; j++)
        {
            cout << character;
            character++;
        }
        cout << endl;
    }
    return 0;
}