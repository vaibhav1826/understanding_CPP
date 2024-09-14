/*
Problem Statement



Dhruv is a professor who wants to develop a program to manage student information using a class called Student. The program should allow Dhruv to input details about multiple students, such as their names, the number of subjects they have, and their marks in each subject.


*/

#include <iostream>
#include <iomanip>
using namespace std;

class student
{
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    cout << "Student Details: " << endl;
    while (t--)
    {
        string name;
        getline(cin, name);
        cout << "Name: " << name << endl;
        int size;
        cin >> size;
        float arr[size];
        float sum;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cin.ignore();
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        cout << "Average marks: " << fixed << setprecision(2) << sum / size << endl;
        sum = 0;
    }
};