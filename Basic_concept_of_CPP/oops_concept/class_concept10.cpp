// 4. Hierarchical Inheritance
// In this type of inheritance, more than one subclass is inherited from a single
// base class. i.e. more than one derived class is created from a single base class.

// basic program

#include <iostream>
using namespace std;

class a
{ // base class
public:
    void display(int num)
    { // function call
        cout << " the value : " << num << endl;
    }
};

class b : public a
{

}; // formationof first sub class

class c : public a
{

}; // formation of second sub class

int main()
{
    b object1;            // class b object
    c object2;            // class c object
    object1.display(20);  // function call
    object2.display(200); // function call
};