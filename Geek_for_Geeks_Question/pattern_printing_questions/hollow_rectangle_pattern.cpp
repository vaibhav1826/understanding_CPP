// program for making a hollow square pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking input from the user

    for (int i = 1; i <= a; i++)
    { // condition for making hollow square pattern
        for (int j = 1; j <= a; j++)
        {
            if (j == 1 || j == a || i == 1 || i == a)
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