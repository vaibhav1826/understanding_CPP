// program to check whether a number is armstrong or not
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "enter the number : ";
    cin >> a;
    int num2 = a;
    int sum1 = a;
    int count;
    while (a > 0) // applying while loop condition to count the digit
    {
        int rem = a % 10;
        count++;
        a = a / 10;
    }
    int sum;
    for (int i = 0; i < count; i++) // applying for loop condition
    {
        int rem = num2 % 10;
        sum = sum + pow(rem, count);
        num2 = num2 / 10;
    }
    if (sum == sum1) // condition for checking its a armstrong number or not
    {
        cout << "its a armstrong number";
    }
    else
    {
        cout << "its not a armstrong number";
    }

    return 0;
}