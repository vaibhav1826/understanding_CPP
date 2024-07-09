// program to search the element in an array using binary search
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    int arr[10] = {10, 30, 50, 70, 90, 20, 40, 60, 80, 100}; // declaration
    int target = 50;                                         // declaration
    for (int i = 0; i < 10; i++)
    { // condition for arranging the array in ascending order
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int c = 0; // declaration
    for (int i = 0; i < 10; i++)
    { // condition for searching an element
        if (arr[i] == target)
        {
            cout << " the element " << target << " is on index " << i;
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "The element is not present in the array";
    }
    return 0;
}
