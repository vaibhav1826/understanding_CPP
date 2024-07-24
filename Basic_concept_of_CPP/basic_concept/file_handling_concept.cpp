// concept of writing a reading a file in cpp

#include <iostream> // library for operatering input output stream in cpp
#include <fstream>
using namespace std;

// the useful classes in cpp :-
// 1.fstreambase
// 2.ifstream  --> derived from the fstreambase
// 3.ofstream --> derived from the fstreambase

int main()
{
    // writing file in cpp using open function
    ofstream file;
    file.open("filehandling.txt");
    file << "this is me";
    file.close();

    // opening file in cpp using close function
    ifstream file1;
    string st;
    file1.open("filehandling.txt");
    file1 >> st;
    cout << st;
    file1.close();
    return 0;
}
