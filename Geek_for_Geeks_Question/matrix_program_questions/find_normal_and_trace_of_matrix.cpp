// program to find the normal and trace of a matrix
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaration of array
    int normal, trace;

    for (int i = 0; i < 3; i++)
    {
        trace = trace + arr[i][i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            normal = normal + arr[i][j] * arr[i][j];
        }
    }
    cout << "the normal of matrix : " << sqrt(normal) << endl;
    cout << "the trace of matrix : " << trace << endl;
    return 0;
}