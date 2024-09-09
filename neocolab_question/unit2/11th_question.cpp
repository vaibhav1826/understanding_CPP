/*
Problem Statement



Janu enjoys learning puzzles from her childhood. She is given an rxc matrix and asked to sum the elements in each row. She needs to attain the sum of elements in a matrix. Create a class named MatrixSum to handle the same.

*/

#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int arr[size1][size2];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < size1; i++)
    {
        int sum = 0;
        for (int j = 0; j < size2; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << " SUM: " << sum << endl;
    }
}