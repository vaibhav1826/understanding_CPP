/*
Problem Statement



Imagine you are designing a program for a construction company that needs to keep track of rectangles being used for various projects. You are tasked with creating a class named Rectangle to represent each rectangle used in the projects.
*/

#include <iostream>
using namespace std;
int area(int a, int b)
{
    return a * b;
}
int main()
{
    int e;
    cin >> e;
    cout << "Total number of rectangles: " << e << endl;
    for (int i = 1; i <= e; i++)
    {
        int num1;
        cin >> num1;
        int num2;
        cin >> num2;
        cout << "Area of rectangle " << i << ": " << area(num1, num2) << endl;
    }
    return 0;
};