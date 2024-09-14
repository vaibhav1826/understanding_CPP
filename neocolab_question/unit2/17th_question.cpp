/*
Problem Statement



You are tasked with developing a simple book cataloging program. The program allows the user to enter details of multiple books, such as title, author, and publication year. The program then displays the entered book information.



Develop a book cataloging program that allows the user to enter the details of multiple books and displays the entered book information. Create a class called Book that stores all the attributes and also uses an array of objects to solve the problem.
*/

#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string title;
    void display(int j)
    {
        cout << "Book " << j << ":" << endl;
    }
};

int main()
{
    int size;
    cin >> size;
    cout << "Book Information: " << endl;
    cin.ignore();
    for (int i = 1; i <= size; i++)
    {
        string a, b;
        int c;
        getline(cin, a);
        getline(cin, b);
        cin >> c;
        book b1;
        b1.display(i);
        cout << "Title: " << a << endl;
        cout << "Author: " << b << endl;
        cout << "Publication Year: " << c << endl;
        cin.ignore();
    }
}