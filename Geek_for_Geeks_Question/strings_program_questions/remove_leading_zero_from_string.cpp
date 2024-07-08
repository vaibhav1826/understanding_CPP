// program  to remove the leading zero from the string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str = "000011356550"; // declaration
    int a = stoi(str);           // function to convert the string to integer
    cout << a;
    return 0;
}