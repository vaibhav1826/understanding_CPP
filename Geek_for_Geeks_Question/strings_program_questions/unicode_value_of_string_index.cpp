// program to find the unicode value of each element of string
#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    string str = "vaibhav"; // declaration
    int a = str.length();   // function for counting the length of string

    for (int i = 0; i < a; i++)
    { // for printing unicode of the element of the string
        int code = str[i];
        cout << " the unicode of character at index " << i << " : " << code << endl;
    }
    return 0;
}