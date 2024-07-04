// program to find the maximum and minimum number in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {10, 20, 30, 40};
    int min = arr[0]; // declaration
    int max = arr[0]; // declaration
    for (int i = 0; i < 4; i++)
    { // condition for minimum number
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << endl;
    for (int i = 0; i < 4; i++)
    { // condition for maximum number
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}