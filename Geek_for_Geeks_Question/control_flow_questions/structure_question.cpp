// program to make a function by implementing structure concept in question
#include <iostream>
using namespace std;
struct student
{
    string subject;
    int marks;
};
void students(student *aman, student *vishal)
{
    if (aman->marks > vishal->marks)
    {
        cout << aman->marks << " marks is scored by aman which is greater than vishal ";
    }
    else
    {
        cout << vishal->marks << " marks is scored by vishal which is greater than aman ";
    }
}
int main()
{
    struct student aman, vishal;
    aman.subject = "maths";
    aman.marks = 42;
    vishal.subject = "maths";
    vishal.marks = 72;
    students(&aman, &vishal);
}
