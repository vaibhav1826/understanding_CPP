/*
Raj oversees parcel IDs in his logistics company and needs to identify prime numbers within a given range for special processing.



He wants to create a program that reads the start and end values of this range and uses reference variables to determine and display all prime parcel IDs in ascending order.



Function Name: void generatePrimesInRange



Note: This is a sample question asked in TCS recruitment.
*/

#include <iostream>
using namespace std;

int check(int a)
{
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << a << " ";
    }
};
int main()
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    for (int i = num1; i < num2; i++)
    {
        check(i);
    }
    return 0;
};