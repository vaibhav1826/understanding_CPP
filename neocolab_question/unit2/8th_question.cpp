/*
Problem Statement



Anthony needs to develop a program to sort an array of integers and determine if all the elements are identical. Create a class named ArraySorter that reads an array of 10 integers, sorts them in ascending order if they are not all the same, and prints the sorted array.



If all the numbers are identical, the program should output a message indicating that all numbers are the same.
*/

#include <iostream>
using namespace std;
class ArraySorter
{

public:
    void sort(int arr[10])
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i; j < 10; j++)
            {
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    };
    void display(int arr[10])
    {
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    ArraySorter task;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == arr[0])
        {
            count++;
        }
    }
    if (count == 10)
    {
        cout << "All numbers are the same";
    }
    else
    {
        cout << "Arranged elements are: ";
        task.sort(arr);
        task.display(arr);
    }
}