// program  to reverese a string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "vaibhav"; // declaration
    int a = str.length();   // function for counting the length
    for (int i = a; i >= 0; i--)
    { // condition for making the string reverse
        cout << str[i];
    }
    return 0;
}