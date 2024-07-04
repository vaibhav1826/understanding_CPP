// program to find the common element in array
#include <iostream>
using namespace std;
int main()
{
    int arr1[4] = {1, 5, 8, 9}; // declaration of array
    int arr2[4] = {2, 8, 4, 9}; // declaration of array
    for (int i = 0; i < 4; i++)
    { // condition of finding the common element
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    return 0;
}