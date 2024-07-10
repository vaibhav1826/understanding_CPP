// basic concept of class concept  as making constructor
#include <iostream>
using namespace std;

class student
{ // making of an class

public:    // accessing an public member
    int a; // declaration
    student()
    { // default constructor
        cout << "the name of student now can be register ";
    }
    // parameterised constructor
    student(int x)
    {
        cout << "the student register no  : ";
        a = x;
    }
};

int main()
{
    student std1; // making of an object in a class
    student std2(20);
    cout << std2.a;
    return 0;
}