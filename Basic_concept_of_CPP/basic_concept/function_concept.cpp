// user defined function is a block of code that is made by the user to simply your program
#include <iostream>
using namespace std;
// user defined function
int sum(int a, int b)
{
    int value = a + b;
    return value; // returning  the value from the function
}
// main code
int main()
{
    int num1, num2; // declaration
    cout << "enter the  1st number : ";
    cin >> num1; // taking input from the user
    cout << "enter the 2nd number : ";
    cin >> num2; // taking input from the user
    cout << "sum of two number : " << sum(num1, num2);

    return 0;
}