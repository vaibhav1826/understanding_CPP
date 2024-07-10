// program to Create a Student class with attributes like name, rollNumber,
// and marks. Implement methods to calculate the grade based on the marks.
#include <iostream>
using namespace std;
class student
{

private:
    string student_name;
    int student_marks;

public:
    student(string name, int marks)
    {
        cout << "details of the student :" << endl;
        student_name = name;
        student_marks = marks;
    };

    void setgrade()
    {
        if (student_marks > 90)
        {
            cout << student_name << " got A grade" << endl;
        }
        else if (student_marks > 70 && student_marks < 90)
        {
            cout << student_name << " got B grade" << endl;
        }
        else if (student_marks > 50 && student_marks < 70)
        {
            cout << student_name << " got C grade" << endl;
        }
        else if (student_marks > 33 && student_marks < 50)
        {
            cout << student_name << " got D grade" << endl;
        }
        else
        {
            cout << " failed in exam ! best of luck for future ." << endl;
        }
    };

    void print_data()
    {
        cout << "Name of the student : " << student_name << endl;
        cout << "marks of the student : " << student_marks << endl;
    };
};

int main()
{
    student student1("vaibhav", 95);
    student1.print_data();
    student1.setgrade();

    return 0;
}