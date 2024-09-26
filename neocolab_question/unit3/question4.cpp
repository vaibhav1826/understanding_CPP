/*
Problem Statement



Create a Vehicle class that uses a parameterized constructor to initialize the registration number, make, model, and year of manufacture. Implement a method called displayDetails to print these attributes. Ensure that the class can handle string inputs for the vehicle details.
*/

#include <iostream>
using namespace std;
class Vehicle
{
public:
    void display(string str1, string str2, string str3, int year)
    {
        cout << "Registration Number: " << str1 << endl;
        cout << "Make: " << str2 << endl;
        cout << "Model: " << str3 << endl;
        cout << "Year of Manufacture: " << year << endl;
    };
};
int main()
{
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    string str3;
    getline(cin, str3);
    int year;
    cin >> year;
    Vehicle v1;
    v1.display(str1, str2, str3, year);
}