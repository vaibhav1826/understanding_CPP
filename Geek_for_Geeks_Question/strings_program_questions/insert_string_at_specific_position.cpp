// program to insert string at a specific position
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "geeks geeks"; // declaration
    string str1 = "for ";       // declaration
    int index = 6;              // declaration

    int a = str.length(); // function for counting the length

    str.insert(index, str1); // function for inserting at specific position

    cout << str;
    return 0;
}