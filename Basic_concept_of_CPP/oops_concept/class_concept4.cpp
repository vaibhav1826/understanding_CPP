// class with member function and encapsulation
#include <iostream>
using namespace std;

class bank
{
private:
    string account_number;
    double balance;

public:
    bank(string acc_num, double bal)
    {
        cout << "opening details for the account opener" << endl;
        account_number = acc_num;
        balance = bal;
    };
    void printdetails()
    {
        cout << "account number of the person : " << account_number << endl;
        cout << " current balance : " << balance << endl;
    };
    void deposit(int num)
    {
        balance = balance + num;
        cout << "updated balance : " << balance << endl;
    };
    void withdraw(int num1)
    {
        if (balance > num1)
        {
            balance = balance - num1;
            cout << " remaining balance : " << balance << endl;
        }
        else
        {
            cout << "insuffiecent balance !" << endl;
        }
    };
};

int main()
{
    bank emp("12306694", 12052.20);
    emp.deposit(1000);

    return 0;
}