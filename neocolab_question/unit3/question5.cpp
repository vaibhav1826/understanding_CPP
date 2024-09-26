/*
Problem Statement



Fathima wants to create a program to manage student details. She needs to define a student class that stores the roll number and fee of a student. The program should allow the user to enter the student's details and display them. It should also demonstrate the use of a copy constructor to create a copy of a student object.
*/

#include <iostream>
#include <iomanip>
using namespace std;
class student
{
public:
    void display(int a, double b)
    {
        cout << a << " " << fixed << setprecision(2) << b << endl;
    };
};

int main()
{
    int a;
    cin >> a;
    double b;
    cin >> b;
    student s1;
    cout << "Student Details: " << endl;
    s1.display(a, b);
    cout << "Copied Student Details: " << endl;
    s1.display(a, b);
}