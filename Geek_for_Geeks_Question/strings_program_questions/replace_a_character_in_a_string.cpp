// program to replace a character in a string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "vaibhav";  // declaration
    char c1 = 'v', c2 = 'b'; // declaration
    int a = str.length();    // for getting length of the string
    for (int i = 0; i < a; i++)
    { // condition for replacing character in string
        if (str[i] == c1)
        {
            str[i] = c2;
        }
    }
    cout << "the changed string : " << str;
    return 0;
}