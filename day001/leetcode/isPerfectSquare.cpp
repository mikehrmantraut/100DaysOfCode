class Solution {
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1) return true;
        for (int i=1; i <= num/2; i++)
        {
            if ((unsigned long long)i*i == num)
                return true;
        }
        return false;
    }
};
