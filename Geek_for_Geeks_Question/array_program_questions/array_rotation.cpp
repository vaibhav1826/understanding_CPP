// program to rotate the element of the array
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}; // declaration of array
    int temp_arr[6], a;
    cout << "enter the number : ";
    cin >> a; // taking input from user
    int c = 6 - a, c1 = 0;

    for (int i = 0; i < a; i++)
    { // condition for rotating the array
        temp_arr[c] = arr[i];
        c++;
    }
    for (int i = a; i < 6; i++)
    {
        temp_arr[c1] = arr[i];
        c1++;
    }

    for (int i = 0; i < 6; i++) // printing the element of array
    {
        cout << temp_arr[i] << " ";
    }

    return 0;
}