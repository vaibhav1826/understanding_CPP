/*
Problem Statement



Kate is analyzing a series of measurements and needs to determine how many of these measurements fall outside a specified acceptable range. Given a list of measurement values, write a program to count and display the number of measurements that are either below the lower limit or above the upper limit of the specified range.
*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= a && arr[i] <= b)
        {
            count++;
        }
    }
    cout << size - count;
}