// program for the row wise sorting in 2d array
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{2, 3, 1}, {6, 4, 5}, {8, 7, 9}}; // declaration
    int r = 3, c = 3;                                  // declaration
    for (int i = 0; i < r; i++)
    { // condition for sorting the 2d array row wise
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < r - j - 1; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    { // printing element of 2d array  in sorted form
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}