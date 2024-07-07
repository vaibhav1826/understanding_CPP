// printing the boundary of the element of a matrix
#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // declaration of array
    for (int i = 0; i < 3; i++)
    { // condition for printing the boundary of the matrix
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 2)
            {
                cout << arr1[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}