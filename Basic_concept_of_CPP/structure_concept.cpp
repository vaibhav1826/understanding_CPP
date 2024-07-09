// concept of structure
#include <iostream>
using namespace std;
struct employee // making structure
{
    int emp_id;
    float salary;
};

int main()
{
    struct employee emp1;
    emp1.emp_id = 1;
    emp1.salary = 1205.20;
    cout << emp1.emp_id << endl;
    cout << emp1.salary << endl;

    return 0;
}