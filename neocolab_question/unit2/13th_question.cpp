/*
Problem Statement



Dharun is a teacher and has just finished grading the exams of his students. He wants to analyze the performance of his students by finding the smallest difference between the scores of any two students. Help him write the formula that will help him calculate this smallest difference so that he can generate the report for the same using pointer arithmetic.
*/
#include <iostream>
using namespace std;
int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    int min = arr[0] - arr[1];
    int diff = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            diff = arr[i] - arr[j];
            if (diff > min)
            {
                min = diff;
            }
        };
    };
    cout << abs(min);
}