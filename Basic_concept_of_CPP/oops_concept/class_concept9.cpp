// multilevel inheritance --> In this type of inheritance, a derived class is
// created from another derived class and that derived class can be derived from
//  a base class or any other derived class. There can be any number of levels.

// basic program

#include <iostream>

using namespace std;

class a
{       // base class
public: // public member
    void base_class(int num)
    { // base function
        cout << "base class value : " << num << endl;
    };
};

class b : public a
{       // derived class
public: // public member
    void derived_class(int num1)
    { // derived class function
        cout << "derived class value : " << num1 << endl;
    };
};

class c : public b
{       // derived class from derived class b
public: // public member
    void derived_from_derived_class(int num2)
    { // function
        cout << "derived class from derived class value : " << num2 << endl;
    };
};

// main code

int main()
{
    c value;
    value.base_class(20);                   // function call
    value.derived_class(201);               // function call
    value.derived_from_derived_class(2001); // function call
};
