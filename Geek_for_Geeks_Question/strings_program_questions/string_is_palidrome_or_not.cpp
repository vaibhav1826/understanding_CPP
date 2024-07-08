// program to check whether a string is palidrome or not
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "abba";        // declaration
    int length1 = str.length(); // function for counting the length of a string
    string str2;                // declaration
    for (int i = 0; i < length1; i++)
    { // reversing the string
        str2 = str2 + str[i];
    }
    if (str == str2)
    { // condition for checking whether its a palidrome or not
        cout << "the strings are palidrome";
    }
    else
    {
        cout << "the strings are not palidrome";
    }
    return 0;
}