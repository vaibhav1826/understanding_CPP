// program to remove the duplicate element from the array
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 5, 2, 4, 5};
    int n = 6, i, j;
    for (int i = 0; i < n; i++)
    { // condition for remove the duplicate element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    { // printing the element of array
        cout << arr[i] << " ";
    }

    return 0;
}