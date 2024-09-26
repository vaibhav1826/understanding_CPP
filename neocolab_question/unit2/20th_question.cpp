/*

Jaanu wants to perform operations on a string. She wants to append the given character to the end of the string and remove the last character from the string. Jaanu needs your help to write a program that performs these operations on the given string.



Write a program that takes a string and a character as inputs and performs the mentioned operations.
*/

#include <iostream>
#include <string>
#include <list>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    char a;
    cin >> a;
    str.push_back(a);
    cout << str << endl;
    str.pop_back();
    cout << str;
}