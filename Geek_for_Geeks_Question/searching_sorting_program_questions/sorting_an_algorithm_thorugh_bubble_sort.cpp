// program to sort an array using the bubble sort algorithm
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    int arr[10] = {10, 50, 40, 20, 30, 70, 60, 80, 100, 90}; // declaration of array
    for (int i = 0; i < 10; i++)
    { // condition for sorting array by interchanging elements of array
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "sorted array : ";
    for (int i = 0; i < 10; i++)
    { // printing elements of array
        cout << arr[i] << " ";
    }
    return 0;
}