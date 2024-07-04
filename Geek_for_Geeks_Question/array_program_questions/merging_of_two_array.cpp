// program to merge to array
#include <iostream>
using namespace std;
int main()
{
    int arr1[4] = {1, 2, 3, 4}; // declaration of array
    int arr2[4] = {5, 6, 7, 8}; // declaration of array
    int arr[8], c;
    for (int i = 0; i < 4; i++)
    { // condition for merging array
        arr[i] = arr1[i];
        c++;
    }
    for (int i = 0; i < 4; i++)
    {
        arr[c] = arr2[i];
        c++;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}