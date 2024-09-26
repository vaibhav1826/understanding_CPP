#include <iostream>
using namespace std;
int main()
{
    int size = 4;
    int arr[4] = {1, 2, 3, 4};
    int target = 2;
    int k = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == target)
        {
            k = i;
        }
    };
    for (int i = k; i < size; i++)
    {
        arr[i] = arr[i + 1];
    };
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};