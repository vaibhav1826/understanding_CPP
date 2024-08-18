/*
Problem Statement



You are developing a module for a text-processing application that will manipulate integers. The module should provide functionalities to set an integer, count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer.



You are tasked with implementing an IntegerManipulator class that performs various operations on a given integer. The class should provide methods to count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer.



Use a Non-inline member function.
*/

#include <iostream>
using namespace std;
class integerManipulator
{
public:
    int number, c = 0, oc = 0;
    void count()
    {
        while (number > 0)
        {
            int temp = number % 10;
            if (temp % 2 != 0)
            {
                oc++;
            }
            number = number / 10;
            c++;
        }
        cout << "Number of digits: " << c << endl;
        cout << "Number of odd digits: " << oc << endl;
    };
};
int main()
{
    int a;
    cin >> a;
    integerManipulator num1;
    num1.number = a;
    num1.count();
    return 0;
};