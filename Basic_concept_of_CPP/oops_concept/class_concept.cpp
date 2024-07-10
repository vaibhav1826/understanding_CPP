// basic concept of classes public  member ;
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class student
{                // structure of a class
public:          // public member --> which can use outside the function even
    string name; // declaration

    void getdata()
    { // function inside the class
        cout << "the student name : " << name;
    }
};

int main()
{
    student std1;
    std1.name = "vaibhav";
    std1.getdata(); // class function call

    return 0;
}