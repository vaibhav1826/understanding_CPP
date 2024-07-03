// program to make a square pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a; // taking user  from the user

    for (int i = 1; i <= a; i++) // conditon for making a square pattern
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}