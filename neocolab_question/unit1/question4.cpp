/*
Problem Statement



Mansi, a cashier at a grocery store, needs to format transaction IDs so they always appear as 9-digit numbers with leading zeros. Write a program that helps Selsi by taking an integer as input and displaying it with leading zeros to ensure the total width is 9 digits.



Note: Use the setfill and setw manipulators to achieve this formatting.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int id;
    cin >> id;
    cout << setw(9) << setfill('0') << id;
};