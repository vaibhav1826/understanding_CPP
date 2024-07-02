// program to print right half pyramid pattern
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
        cout << endl;
    }
    return 0;
}