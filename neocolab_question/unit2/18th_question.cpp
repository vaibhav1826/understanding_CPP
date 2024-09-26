/*
Sam is working on a text-processing task where he needs to replace all occurrences of a specific word in a string with another word. Given a string, a target word to be replaced, and a replacement word, Sam wants to output the modified string with all instances of the target word replaced by the replacement word. Use string objects for processing.
*/

#include <iostream>
#include <string>
#include <regex>

using namespace std;

string replaceWord(const string &text, const string &target, const string &replacement)
{
    // Create a regex object with the target word
    regex targetRegex("\\b" + target + "\\b");
    // Replace all occurrences of the target word with the replacement word
    return regex_replace(text, targetRegex, replacement);
}

int main()
{
    string text = "Sam is working on a text-processing task. Sam needs to replace all occurrences of a specific word.";
    string target = "Sam";
    string replacement = "Alex";

    string modifiedText = replaceWord(text, target, replacement);

    cout << "Original text: " << text << endl;
    cout << "Modified text: " << modifiedText << endl;

    return 0;
}
