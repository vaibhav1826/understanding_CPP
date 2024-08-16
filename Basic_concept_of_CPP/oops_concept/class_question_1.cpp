/*
You are developing a simple date management system for a small library. Each entry in the library’s catalog must record the date when a book was added. Your task is to create a program that allows you to input a date (day, month, and year) whose attributes are declared within the class Date, display this date, and determine if the year is a leap year or not.

*/

#include <iostream>
using namespace std;
class Date
{
public:
    int dd, mm, yy;
    void display()
    {
        cout << dd << " " << mm << " " << yy << endl;
    };
    void check()
    {
        if (yy % 400 == 0)
        {
            cout << yy << " is a leap year";
        }
        else if (yy % 100 == 0)
        {
            cout << yy << " is not a leap year";
        }
        else if (yy % 4 == 0)
        {
            cout << yy << " is a leap year";
        }
        else
        {
            cout << yy << " is not a leap year";
        }
    };
};
int main()
{
    Date date1;
    int a, b, c;
    cin >> a >> b >> c;
    date1.dd = a;
    date1.mm = b;
    date1.yy = c;
    date1.display();
    date1.check();
};