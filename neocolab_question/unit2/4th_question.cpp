/*
Problem Statement



You are tasked with creating a program to manage birthday dates. You need to implement a class called Date that represents a date with day, month, and year components. Additionally, you should use a pointer to an object to perform date operations.
*/

#include <iostream>
using namespace std;
int main()
{
    int date, month, year;
    cin >> date >> month >> year;
    int *ptr1 = &date;
    int *ptr2 = &month;
    int *ptr3 = &year;
    cout << "The date is " << *ptr1 << "/" << *ptr2 << "/" << *ptr3;
}