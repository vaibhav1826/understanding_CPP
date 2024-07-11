// 5. Hybrid Inheritance
// Hybrid Inheritance is implemented by combining more than one type of
// inheritance. For example: Combining Hierarchical inheritance and Multiple
// Inheritance will create hybrid inheritance in C++

// There is no particular syntax of hybrid inheritance. We can just combine
// two of the above inheritance types.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare
{
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};

// first sub class
class Car : public Vehicle
{
public:
    Car() { cout << "This Vehical is a Car\n"; }
};

// second sub class
class Bus : public Vehicle, public Fare
{
public:
    Bus() { cout << "This Vehicle is a Bus with Fare\n"; }
};

// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base class.
    Bus obj2;
    return 0;
}