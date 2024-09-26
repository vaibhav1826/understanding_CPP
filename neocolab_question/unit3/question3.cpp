/*
Problem Statement



Meena is creating a Calendar application that uses the Date class to represent dates. The Date class has the following requirements:



The class stores the day (dd), month (mm), and year (yy) as integer values.
It has a constructor that initializes the date to 31st December 2022 by default.
Another constructor allows the user to specify a custom date.
The class has a display method to print the date in the format dd-mm-yy.
*/

#include <iostream>
using namespace std;
class Date
{
public:
    Date()
    {
        cout << "31-12-2022" << endl;
    };
    void display(int a, int b, int c)
    {
        cout << a << "-" << b << "-" << c;
    };
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= 1 && a <= 31)
    {
        a = a;
    }
    else
    {
        a = 30;
    }
    if (b >= 1 && b <= 12)
    {
        b = b;
    }
    else
    {
        b = 12;
    }
    if (c >= 2023 && c <= 2998)
    {
        c = c;
    }
    else
    {
        c = 2023;
    }

    Date d1;
    d1.display(a, b, c);
}