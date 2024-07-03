// program to print floyd triangle pattern
#include <iostream>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter the number : ";
    cin >> a;    // taking input from the user
    int num = 1; // declaration
    // condition for making floyd triangle
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}