class Solution
{
public:
    int reverse(int x)
    {
        long long rev = 0;
        while (x)
        {
            int temp = x % 10;
            rev = rev * 10 + temp;
            x /= 10;
        }
        // use this when you want to use this code on leetcode for causing value of x under the contraints
        // if (rev > INT_MAX || rev < INT_MIN)
        // {
        //    return 0;
        //}
        return rev;
    }
};