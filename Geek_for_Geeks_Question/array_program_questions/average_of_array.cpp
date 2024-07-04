// program to find the average of an array
#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {10, 20, 30, 40}; // declaration of an array
    int average, sum;              // declaration
    for (int i = 0; i < 4; i++)
    { // condition for average
        sum = sum + arr[i];
    }
    average = sum / 4;
    cout << "Average of array elements are : " << average;
    return 0;
}