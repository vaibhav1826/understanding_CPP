class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int i = 1;
        int value = 0;
        for (i; i < num; i++)
        {
            if (num % i == 0)
            {
                value = value + i;
            }
        };
        if (value == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};