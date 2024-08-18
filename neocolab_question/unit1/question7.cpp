/*
Problem statement

﻿

Design a banking system to handle account transactions. The system should allow users to deposit and withdraw money from their accounts. Each account is associated with an account holder's name, account number, and balance.



Implement the system using a union named AccountData that contains a structure with fields for the account holder's name, account number, and balance.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    int account_number;
    cin >> account_number;
    double balance;
    cin >> balance;
    double deposit;
    cin >> deposit;
    double withdraw;
    cin >> withdraw;

    balance = balance + deposit;
    cout << "Amount deposited successfully." << endl;
    if (balance > withdraw)
    {
        cout << "Amount withdrawn successfully." << endl;
        balance = balance - withdraw;
    }
    else
    {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }
    cout << "Account details:" << endl;
    cout << "Account holder's name: " << name << endl;
    cout << "Account number: " << account_number << endl;
    cout << "Balance: " << fixed << setprecision(2) << balance;
};