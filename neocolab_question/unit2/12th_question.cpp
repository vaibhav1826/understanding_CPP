/*
Problem Statement



Write a function isValidPhoneNumber that takes a phone number (string) as input and determines whether it is a valid phone number. The phone number format should be XXX-XXX-XXXX, where X represents a digit. The number is considered valid if the hyphens are in exact same positions and the length of the string is 12.
*/

#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string number;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '-')
        {
            number += str[i];
        }
        if (str[i] == '-')
        {
            count++;
        }
    }
    if (number.length() == 10 && count == 2)
    {
        cout << "Yes, the phone number is valid" << endl
             << number << endl;
    }
    else
    {
        cout << "No, the phone number is not valid";
    }
}
