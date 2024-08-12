// here is the leetcode solution for the palindrome number
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int y = x;
        long int rev = 0;
        while (x > 0)
        {
            int temp = x % 10;
            rev = rev * 10 + temp;
            x = x / 10;
        }
        if (rev == y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};