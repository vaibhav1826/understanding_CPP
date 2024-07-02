// program to make a pattern of invert pyramid
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from user

    for (int i = 1; i <= a; i++) // condition for making the invert pyramid pattern
    {
        for (int j = a; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}