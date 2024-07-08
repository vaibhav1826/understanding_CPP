// concept of pointer in the cpp
// what is pointer ? --->
// data type which holds the address of other data type
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    // & --> address of operator
    cout << "the address of a : " << &a << endl;
    cout << "the address of a : " << b << endl;

    // * ---> dereference of operator
    cout << " the value of a : " << *b << endl;

    // pointer in array :-->
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        cout << "the address of element " << i << " : " << &arr[i] << endl;
    }

    return 0;
}