// program to print left half pyramid pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a;                    // taking input from the user
    for (int i = 1; i <= a; i++) // condition for making the pattern
    {
        for (int k = a; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}