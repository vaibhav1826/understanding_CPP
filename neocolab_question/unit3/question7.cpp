/*
Problem Statement



Ravi is creating a program for sales calculation that takes an item cost and a tax rate as inputs, where the class Sale uses a constructor with default arguments (default tax rate of 0.05). The program should calculate and display the sales tax and total cost for both the default tax rate and a user-entered custom tax rate.



Formula:

Sales Tax Amount = Item cost * Tax rate
Total Amount = Item cost + Sales tax amount
*/

#include <iostream>
#include <iomanip>
using namespace std;
class Sale
{
public:
    void display(double a, double b)
    {
        cout << "Amount (default tax rate): " << fixed << setprecision(2) << b * 0.05 << endl;
        cout << "Total: " << fixed << setprecision(2) << b + b * 0.05 << endl;
    };
    void display1(double a, double b)
    {
        cout << "Amount (custom tax rate): " << fixed << setprecision(2) << a * b << endl;
        cout << "Total: " << fixed << setprecision(2) << b + (a * b) << endl;
    };
};
int main()
{
    double a, b;
    cin >> a >> b;
    Sale s1;
    s1.display(a, b);
    s1.display1(a, b);
}
