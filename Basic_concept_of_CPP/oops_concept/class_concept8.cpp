// Multiple Inheritance is a feature of C++ where
// a class can inherit from more than one class.
// i.e one subclass is inherited from more than one base class.

#include <iostream>
using namespace std;

class b
{ // 1st base class
public:
    void display_base_class_b(int num)
    { // base 1 -> function
        cout << "the value of class b : " << num << endl;
    };
};

class c
{ // 2nd base class
public:
    void display_base_class_c(int num1)
    { // base 2 ->  functiion
        cout << "the value of class c : " << num1 << endl;
    };
};

class a : public b, public c
{ // multiple inheritance from different base class
public:
    void display_base_class_a(int num2)
    {
        cout << "the value of class a : " << num2 << endl;
    };
};
int main()
{
    a value1;
    value1.display_base_class_a(20); // call for function
    value1.display_base_class_b(21); // call for function
    value1.display_base_class_c(22); // call for function
};