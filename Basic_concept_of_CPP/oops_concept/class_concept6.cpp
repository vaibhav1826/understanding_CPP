// C++ program to illustrate how to access the inherited
// members of the base class in derived class
#include <iostream>
using namespace std;

class base
{ // base class
public:
    int value;

    void display()
    { // method function
        cout << "value of variable : " << value << endl;
    }
};

class derived : public base
{ // derived class from base class
public:
    void display_member()
    { // method function
        display();
    }
    void getdata(int data)
    { // method function
        value = data;
    }
};

int main()
{
    derived object;          // making of an object of class
    object.getdata(20);      // call for function in derived class
    object.display_member(); // call for function in derived class
};