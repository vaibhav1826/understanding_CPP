// program to interchange the first and last row in matrix
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaration
    int new_arr[3][3];
    for (int i = 0; i < 3; i++)
    { // condition for interchanging the first and last row
        new_arr[0][i] = arr[2][i];
        new_arr[1][i] = arr[1][i];
        new_arr[2][i] = arr[0][i];
    }
    for (int i = 0; i < 3; i++)
    { // printing element of an array
        for (int j = 0; j < 3; j++)
        {
            cout << new_arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}