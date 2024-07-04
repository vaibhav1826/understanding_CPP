// program to remove all the occurence of element in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 1, 3, 1, 4}; // declaration
    int target = 1, count, n = 6;
    for (int i = 0; i < n; i++)
    { // condition for counting of same element in array
        if (target == arr[i])
        {
            count++;
        }
    }
    int new_arr[n - count];
    int a = 0;
    for (int i = 0; i < 6; i++)
    { // condition for removing all occurence
        if (target != arr[i])
        {
            new_arr[a] = arr[i];
            a++;
        }
    }
    for (int i = 0; i < n - count; i++)
    { // printing the element of an array
        cout << new_arr[i] << " ";
    }
    return 0;
}