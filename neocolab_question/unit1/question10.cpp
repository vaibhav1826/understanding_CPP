/*
Problem Statement



You are developing a recipe management system that deals with fractional quantities of ingredients. To implement this functionality, you decide to create a Fraction class to handle fractional calculations. The Fraction class has private attributes numerator and a denominator to represent a fraction.

Explanation:

The denominators of both fractions are the same (7), so the function directly adds the numerators and places the sum over the common denominator. Mathematically, 4/7 + 8/7 = (4 + 8) / 7 = 12 / 7.


*/

#include <iostream>
using namespace std;
class fraction
{

    friend void addfraction();
};
int main()
{
    int num1, den1;
    int num2, den2;
    cin >> num1 >> den1;
    cin >> num2 >> den2;
    if (den1 == den2)
    {
        cout << (num1 + num2) << "/" << den1;
    }
    else
    {
        cout << (num1 * den2) + (num2 * den1) << "/" << den1 * den2;
    }
    return 0;
};