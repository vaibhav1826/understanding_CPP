/*
Problem Statement



John and Michael play a game of multiplication. The game starts with an integer p initialized to 1. They take turns multiplying p by one of the numbers from 1 to 9 in a sequence. John always starts by multiplying p by 1 and then passes the result to Michael. Michael multiplies the number by 2 and passes the result back to John. John then multiplies by 3, and so on, increasing the multiplier by 1 with each turn.



Before the game starts, they draw an integer N. The winner is the player who first reaches or exceeds p >= N during their turn. Write a class MultiplicationGame with a member function void game(int) to simulate this scenario and determine the winner.
*/

#include <iostream>
using namespace std;
class multiplicationGame
{
    void game() {

    };
};

int main()
{
    int num;
    cin >> num;
    int sum = 1;
    int count = 1;
    while (sum < num)
    {
        sum = sum * count;
        count++;
    }
    if ((count - 1) % 2 == 0)
    {
        cout << num << " Michael wins";
    }
    else
    {
        cout << num << " John wins";
    }
}