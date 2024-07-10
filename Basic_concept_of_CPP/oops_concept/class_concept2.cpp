// basic concept  of class concept as private member
#include <iostream>
using namespace std;

class student
{ // defining class

private:      // private member --> which can be express in function only
    int a, b; // declaration
    void printdata(int a, int b);

public: // public member --> which can express outside the function too
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void getdata()
    { // printing the variable of a and b
        cout << "the value of a : " << a << endl;
        cout << "the value of b : " << b << endl;
    }
};

void student ::printdata(int a, int b) {};

int main()
{
    student std1;       // making objects
    std1.setdata(2, 3); // calling the class function
    std1.getdata();     // calling the class function

    return 0;
}