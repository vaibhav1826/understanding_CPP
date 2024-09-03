/*
Single File Programming Question
Problem Statement



Vijay wants to write a program for the multiplication of square matrices. Help him write the code.



Note: Square matrices mean the number of rows equals the number of columns in the given matrix.
*/

#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr1[size][size], arr2[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int multiply_matrix[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            multiply_matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                multiply_matrix[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "The product of the two matrices is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << multiply_matrix[i][j] << " ";
        }
        cout << endl;
    }
}