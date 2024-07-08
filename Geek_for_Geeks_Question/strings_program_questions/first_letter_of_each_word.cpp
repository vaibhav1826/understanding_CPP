// program to print the first letter of each word in a string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "geeks for geeks";   // declaration
    int length1 = str.length();       // function for count the length
    string str1 = str1 + str[0];      // declaration
    for (int i = 0; i < length1; i++) // condition for counting a first letter of each word
    {
        if (str[i] == ' ')
        {
            str1 = str1 + str[i + 1];
        }
    }
    cout << str1;
    return 0;
}