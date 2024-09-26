/*
Problem Statement



You are tasked with creating a GradeBook class to automate grade storage for students. The GradeBook class should have the following features:



Private members: courseName and instructorName with corresponding get and set methods.
A default constructor that allows creating an object without initial values and a setData method to set courseName and instructorName.
A displayMessage method to display the course and instructor details.
Utilize string data types for data handling.


The program should take input for the course name and instructor name and display them as is.
*/

#include <iostream>
using namespace std;
class GradeBook
{
public:
    void displayMessage(string str1, string str2)
    {
        cout << "Welcome to the grade book for " << str1 << "!" << endl;
        cout << "This course is presented by: " << str2 << endl;
    };
};

int main()
{
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    GradeBook book1;
    book1.displayMessage(str1, str2);
};