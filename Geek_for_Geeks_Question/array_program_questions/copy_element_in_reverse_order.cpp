// program to copy element in reverse order in another array
#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4}; // declaration of array
    int new_arr[4];
    int n = 4, a = 3;
    for (int i = 0; i < 4; i++) // condition for copy reverse of an array
    {
        new_arr[i] = arr[a];
        a--;
    }
    for (int i = 0; i < 4; i++) // printing the new array
    {
        cout << new_arr[i] << " ";
    }
    return 0;
}