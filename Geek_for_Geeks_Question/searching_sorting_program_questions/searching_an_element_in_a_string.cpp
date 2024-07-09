// write a program to search a given element x in arr[].
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    int arr[10] = {20, 40, 60, 10, 30, 50, 80, 70, 100, 90}; // declaration
    int target = 40;                                         // element that is find from the array
    int c = 0;
    for (int i = 0; i < 10; i++)
    { // condition for finding the target in array
        if (arr[i] == target)
        {
            cout << "The target " << target << " is present at index : " << i;
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "the target element is not present in array";
    }
    return 0;
}