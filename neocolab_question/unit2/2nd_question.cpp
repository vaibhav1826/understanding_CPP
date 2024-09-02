/*
Problem Statement



Saru is working as a sales analyst for a retail company. His task is to analyze the sales data and determine the frequency of each product sold during a specific period. Since there are many products piled up together as it is a selling season, she is unable to do everything manually.



She decided to write a program that calculates the frequency of each product sold. As she is super busy, she is unable to concentrate on writing the code. Help her write the code for the same so that she can report the frequency of each product sold to her head using pointer arithmetic.
*/

#include <iostream>
using namespace std;
int count(int num, int arr[20], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    if (count == 1)
    {
        cout << num << " - " << count << " time" << endl;
    }
    else
    {
        cout << num << " - " << count << " times" << endl;
    }
};
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            count(arr[i], arr1, size);
        }
    }
    // count(15 , arr , size);
};