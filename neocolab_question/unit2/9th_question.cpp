/*
Problem Statement



Mandy is analyzing data stored in matrices and needs to determine the number of rows that contain at least one zero element. Help her with a program to count and print this information.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
