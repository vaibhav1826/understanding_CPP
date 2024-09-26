/*
Problem Statement



Jai and Rekha are planning to paint their newly built house and are trying to automate the calculation of their wall area in order to order the amount of paint they might need.



Help them by creating a Wall class where the length and height of the wall are provided via a setData method. Use the default constructors. Provide a method called calculateArea which would return the area of the wall.
*/

#include <iostream>
#include <iomanip>
using namespace std;
class Wall
{
public:
    void calculateArea(float a, float b)
    {
        cout << fixed << setprecision(1) << a * b;
    };
};

int main()
{
    float a, b;
    cin >> a >> b;
    Wall area;
    area.calculateArea(a, b);
};