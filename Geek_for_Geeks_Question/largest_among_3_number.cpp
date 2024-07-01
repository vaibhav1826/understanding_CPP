#include <iostream>
using namespace std;

int main()
{
    int a, b, c; // declaration of integer
    cout << "enter the 3 numbers : " << endl;
    cin >> a >> b >> c; // taking input from the user

    if (a > b && a > c)
    { // if - else condition
        cout << a << " is the largest number" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is the largest number" << endl;
    }
    else
    {
        cout << c << " is the largest number" << endl;
    }

    return 0;
}