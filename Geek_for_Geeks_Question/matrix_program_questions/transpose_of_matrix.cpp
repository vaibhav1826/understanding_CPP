// program to make the transpose of a matrix
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaration of array
    int new_arr[3][3];                                 // declaration of new_array
    cout << "the matrix :" << endl;
    for (int i = 0; i < 3; i++)
    { // printing element of matrix
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    { // transpose of matrix
        for (int j = 0; j < 3; j++)
        {
            new_arr[j][i] = arr[i][j];
        }
    }
    cout << "new matrix :" << endl;
    for (int i = 0; i < 3; i++)
    { // printing ttranspose of matrix
        for (int j = 0; j < 3; j++)
        {
            cout << new_arr[i][j];
        }
        cout << endl;
    }

    return 0;
}