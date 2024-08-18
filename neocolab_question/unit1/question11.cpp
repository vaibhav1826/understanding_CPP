/*
Problem Statement



Seema is building a ticket reservation system and she wants to reserve tickets and cancel for a particular id. She created two classes: Ticket and Reservation. Each Ticket has a private attribute ticketId, and each Reservation has a private attribute reservedTickets (an array of tickets). The Reservation class contains a friend function cancelReservation(Reservation&, const Ticket&) that allows a ticket to be canceled from a reservation.



Implement the classes and the cancelReservation function and write a program to manage ticket reservations.



Note: This is a sample question asked in Accenture recruitment.


*/

#include <iostream>
using namespace std;
class Reservation
{
public:
    friend void cancelReservation();
};
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Reserved Tickets: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << endl
                 << "Ticket with ID " << target << " has been cancelled";
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << endl
             << "Ticket with ID " << target << " not found in the reservation";
    }
    cout << endl
         << "Reserved Tickets: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != target)
        {
            cout << arr[i] << " ";
        }
    }
};
