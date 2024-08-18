/*
Problem Statement



An ice cream vendor sells his ice-creams in cone (radius r and height h) and square (side r) shaped containers. However, he is unsure of the quantity that can be filled in the two containers.



You must write a program that prints the volume of the containers given their respective dimensions as input.



Your class must be named ‘Icecream’ which has two methods with the same name ‘Quantity’ each having the respective dimensions of the containers as the parameters.



Method prototypes:

float Quantity(int r) // for square
float Quantity(int r, int h) // for cone


Formulas:

Volume of a square = side * side * side
Volume of a cone = 0.33 * pi * radius * radius * height


Use variable name as M_PI for pi.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cin >> a;
    double result;
    if (a == 1)
    {
        int side;
        cin >> side;
        result = side * side * side;
        cout << fixed << setprecision(2) << result;
    }
    else if (a == 2)
    {
        int r, h;
        cin >> r >> h;
        result = 0.33 * 3.14159265359 * r * r * h;
        cout << fixed << setprecision(2) << result << endl;
    }
}