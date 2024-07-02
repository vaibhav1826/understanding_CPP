#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the year you wanna check";
    cin >> a;                                       // taking input from user
    if (a % 100 == 0 || a % 4 == 0 || a % 400 == 0) // conditon for finding leap year
    {
        cout << a << " is a leap year" << endl;
    }
    else
    {
        cout << a << " is not a leap year" << endl;
    }

    return 0;
}