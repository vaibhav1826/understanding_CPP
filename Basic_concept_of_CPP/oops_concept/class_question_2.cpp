/*
Problem Statement



Ragu wants to create a program to store and display personal information about individuals. He decided to create a class called Person to represent a person's details with a name, age and gender as their private attributes. Initialize and display the same using member functions. The name and gender should be displayed in uppercase letters.



Note: This is a sample question asked in an Infosys interview.
*/

#include <iostream>
#include <algorithm>

#include <string>

using namespace std;
class Person
{
public:
    string name, gender;
    int age;

    void uppercase()
    {
        cout << name << " " << age << " " << gender;
    };
};

int main()
{
    Person p1;
    string a;

    cin >> a;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    int b;
    cin >> b;
    string c;
    cin >> c;
    transform(c.begin(), c.end(), c.begin(), ::toupper);
    p1.name = a;
    p1.age = b;
    p1.gender = c;
    p1.uppercase();
}