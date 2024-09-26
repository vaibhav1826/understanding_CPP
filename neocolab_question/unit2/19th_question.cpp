/*
You are tasked with designing a simple airline reservation system for a small airline company. The system should allow the airline to manage and provide information about their flight destinations and the number of flights available to each destination.

*/

#include <iostream>
using namespace std;
class Airline
{
public:
    void initialize() {
    };
    void addDestination() {
    };
    void checkFlights() {
    };
};

int main()
{
    int t;
    cin >> t;
    int size = t * 2;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << arr[i + 1];
            count = 1;
            break;
        };
    };
    if (count == 0)
    {
        cout << "Destination not found";
    }
}