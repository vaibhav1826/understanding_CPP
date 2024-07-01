#include <iostream>
using namespace std;

int main()
{
    // loop condition --> for loop
    // sum of 10 numbers
    int sum; // declaration of integer

    for (int i = 0; i < 10; i++)
    {
        sum += i;
    }

    cout << "the sum of 10 numbers : " << sum << endl; // printing the sum

    // loop condition --> while loop
    // printing number from 1 to 5

    int j = 0; // declaration
    while (j < 5)
    {
        cout << j << endl;
        j++;
    }

    // loop condition --> do while loop
    // in this type of loop the condition will work at least once even if the condition is false.
    // print hello world

    int k = 0; // declaration
    do
    {
        cout << "hello world" << endl;
    } while (k > 5);

    return 0;
}