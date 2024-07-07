// program  to compare whether two matric are equal or not
#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaration of array
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaration of array
    int c = 0;
    for (int i = 0; i < 3; i++)
    { // condition of comparing two matrix
        for (int j = 0; j < 3; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                cout << "the matrix is not equal";
                c++;
                break;
            }
        }
    }
    if (c == 0)
    {
        cout << "the matrix is equal ";
    }
    return 0;
}