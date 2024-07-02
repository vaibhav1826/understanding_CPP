#include <iostream>
using namespace std;

int main()
{
    int a, fact = 1; // declaration
    cout << "enter the number whose factorial you want : ";
    cin >> a; // input from the user
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout << "the factorial is " << fact << endl; // output
    return 0;
}