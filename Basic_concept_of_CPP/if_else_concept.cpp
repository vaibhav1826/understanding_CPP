#include <iostream>
using namespace std;

int main()
{
    // program to check whether a person can vote or not
    int age; // declaration
    cout << "enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you are not allowed to vote" << endl;
    }
    else if (age >= 18)
    {
        cout << "you are allow to vote" << endl;
    }

    return 0;
}