#include <iostream>
using namespace std;
int main()
{
    int a, b;        // declaration  of integer
    float c = 45.05; // declaration of float
    char d = 'a';    // declaration of character

    cin >> a >> b; // taking input from user

    cout << "the value of a : " << a
         << " and b : " << b << endl;                   // for giving output of value a and b integer
    cout << "the float value of c : " << c << endl;     // for giving output as float value
    cout << "the character value of d : " << d << endl; // for giving output as character value
    cout << "addition of two number : " << a + b << endl;
    cout << "subtraction  of two number : " << a - b << endl;
    cout << "multiplication of two number : " << a * b << endl;
    cout << "division of two number : " << a / b << endl;

    return 0;
}
