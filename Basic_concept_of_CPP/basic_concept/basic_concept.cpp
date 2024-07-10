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

    // finding size of variable
    cout << "the size of variable a :" << sizeof(a) << endl; // integer size
    cout << "the size of variable b :" << sizeof(b) << endl; // integer size
    cout << "the size of variable c :" << sizeof(c) << endl; // float size
    cout << "the size of variable d :" << sizeof(d) << endl; // character size

    return 0;
}
