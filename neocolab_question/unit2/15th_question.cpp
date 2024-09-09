/*
Problem Statement



Charu is designing a program for a restaurant. Write a program that has a class called RestaurantMenu that takes the restaurant's menu name, the number of menu items, and their respective prices as attributes. Calculate the average price of the menu items using a member function called calculate. Finally, display the menu name and the calculated average price.

*/

#include <iostream>
#include <iomanip>
using namespace std;
class RestaurantMenu
{
public:
    void calculate(int size, float arr[50])
    {
        float sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum = sum + arr[i];
        }
        cout << "Average Price: " << fixed << setprecision(2) << sum / size;
    };
};

int main()
{
    string str;
    getline(cin, str);
    cout << "Menu Name: " << str << endl;
    int size;
    cin >> size;
    float arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    RestaurantMenu cal;
    cal.calculate(size, arr);
}