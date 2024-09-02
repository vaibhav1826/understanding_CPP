/*
Problem Statement



Mukesh has a certain number of employees, and he wants to record their names and attendance status for a particular day. Each employee can either be "Present" or "Absent." Mukesh also prefers to use pointers to data members to manage the attendance data. Help him with a suitable program.
*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string str[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> str[i];
    }
    cout << "Attendance Report: " << endl;
    for (int i = 0; i < num * 2; i++)
    {
        if (i % 2 == 0)
        {
            cout << str[i] << ": ";
        }
        else
        {
            if (str[i] == "0")
            {
                cout << "absent" << endl;
            }
            else
            {
                cout << "Present" << endl;
            }
        }
    }
}