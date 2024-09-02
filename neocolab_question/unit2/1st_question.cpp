/*
Problem Statement



Write a program that checks the availability of a book based on its price and availability status. The program should read a price and a character indicating availability ('Y' or 'N'), and determine if the book is available and priced below 2500.50. Output "Yes" if the book is available and affordable, otherwise output "No".
*/

#include <iostream>
using namespace std;
void available(float price, char value)
{
    if (value == 'y' || value == 'Y')
    {
        if (price <= 2500.50)
        {
            cout << "Yes";
        }
        else
        {
            cout << "False";
        }
    }
    else
    {
        cout << "No";
    }
};

int main()
{
    float price;
    char num;
    cin >> price;
    cin >> num;
    available(price, num);
}
