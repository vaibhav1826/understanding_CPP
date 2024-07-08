// program to compare strings lexiographically
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1 = "vaibhav"; // declaration
    string str2 = "vaibhav"; // declaration
    int length1 = str1.length();
    int length2 = str2.length();
    int c = 0; // declaration
    if (length1 == length2)
    { // condition for comparing string on length
        for (int i = 0; i < length1; i++)
        { // condition for lexiographically comparing strings

            if (str1[i] != str2[i])
            {
                c++;
                break;
            }
        }
        if (c == 0)
        {
            cout << "strings are lexiographically equal";
        }
        else
        {
            cout << "strings are lexiographically not equal";
        }
    }
    else
    {
        cout << "the length of strings are not equal ";
    }
    return 0;
}