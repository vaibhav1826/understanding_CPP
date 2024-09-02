/*
Problem Statement



You are developing a program to determine the maximum number between two input values. To achieve this, you have created a class called NumberComparator. Your goal is to use the "this" pointer concept within this class.
*/

#include <iostream>
using namespace std;

class NumberComparator
{
private:
    int val1, val2;

public:
    void max(int num1, int num2)
    {
        this->val1 = num1;
        this->val2 = num2;
        if (val1 > val2)
        {
            cout << val1 << " is the maximum number";
        }
        else
        {
            cout << val2 << " is the maximum number";
        }
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    NumberComparator compare;
    compare.max(a, b);
    return 0;
}