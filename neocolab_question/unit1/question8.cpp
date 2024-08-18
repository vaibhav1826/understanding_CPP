/*
Problem Statement



Shabu works at a library and needs to analyze the frequency of digits in identification numbers. Help Shabu by writing a program that counts how many times each digit (0-9) appears in a given number. The output should use the setw manipulator function for formatting.


*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, size1 = 0;
    cin >> a;
    int num = a;
    while (a > 0)
    {
        a = a / 10;
        size1++;
    }
    cout << setw(0);
    int arr[size1];
    for (int i = 0; i < size1; i++)
    {
        int temp = num % 10;
        arr[i] = temp;
        num = num / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << "Digit " << i << ":  " << count << " times" << endl;
        }
    }
    return 0;
};