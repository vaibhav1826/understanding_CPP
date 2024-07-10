#include <iostream>
using namespace std;
// this program is for giving name of the weekdays as we provide input to it in number
int main()
{
    int a;                                  // declaration of an integer
    cout << "enter the weekdays number : "; // taking input of the variable a
    cin >> a;

    switch (a) // for using switch statement we use this syntax
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wenesday";
        break;
    case 4:
        cout << "thrusday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
    }

    return 0;
}