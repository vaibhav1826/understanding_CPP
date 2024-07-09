// program to sort the character of a string
#include <bits/stdc++.h> // standard library for including built-in function
using namespace std;
int main()
{
    string str = "geeks for geeks"; // declaration
    sort(str.begin(), str.end());   // function for sorting string
    cout << str;
    return 0;
}