// basic concept of array
// array is a collection of data
#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {10, 20, 30, 40}; // initialising an array
    // printing elements of array
    cout << arr[0] << endl; // element at index 0

    cout << arr[1] << endl; // element at index 1

    cout << arr[2] << endl; // element at index 2

    cout << arr[3] << endl; // element at index 3

    // print sum of all element of array
    int sum;                    // declaration
    for (int i = 0; i < 4; i++) // way to slice each element from the array
    {
        sum = sum + arr[i];
    }
    cout << sum << " " << endl;

    // printing the array
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}