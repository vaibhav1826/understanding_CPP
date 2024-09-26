#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of array you want: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    };
    int value;
    cout << endl
         << "enter the value : ";
    cin >> value;
    int position;
    cout << "in which position you wanna enter value : ";
    cin >> position;
    for (int i = size - 1; i > position; i--)
    {
        arr[i + 1] = arr[i];
    };
    arr[position] = value;
    size++;
    cout << "the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    };
};