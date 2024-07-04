// program to check whether two array are equal or not
#include <iostream>
using namespace std;

int main()
{
    int arr1[4] = {1, 3, 4, 9}; // declaration of array
    int arr2[4] = {9, 4, 1, 3}; // declaration of array
    for (int i = 0; i < 4; i++)
    { // logic of sorting the array
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] > arr1[j])
            {
                arr1[i] == arr1[j];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr2[i] > arr2[j])
            {
                arr2[i] == arr2[j];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    { // logic of comparing the array linearly
        if (arr1[i] != arr2[i])
        {
            cout << "they are not equal";
            break;
        }
    }
    return 0;
}