/*
Problem Statement



Sandeep is developing a language processing tool for a linguistics research project. The goal is to analyze the consonant usage in a given text. Write a program that takes a paragraph as input and counts the number of consonants in each word of the text. Utilize the pointer-to-pointer concept to analyze the query and count the consonants.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    string str1 = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str1.length(); j++)
        {
            if (str[i] == str1[j])
            {
                count++;
            }
        }
    }
    cout << count;
}