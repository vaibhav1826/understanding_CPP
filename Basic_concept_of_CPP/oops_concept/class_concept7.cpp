// C++ program to illustrate how to access the inherited
// members of the base class in derived class
// for pratice purpose
// single inhertance

#include <iostream>
using namespace std;

class Animal
{ // base class
public:
    void eat()
    { // function method
        cout << "Animal is eating" << endl;
    }
};

class dog : public Animal
{ // derived class
public:
    void bark()
    { // function method
        cout << "dog is barking" << endl;
    };
};

int main()
{
    dog lebra;    // making object from derived class
    lebra.eat();  // calling function
    lebra.bark(); // calling function
    return 0;
};