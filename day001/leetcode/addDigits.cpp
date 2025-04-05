class Solution {
public:
    bool isOneDigit(int n)
    {
        string s = to_string(n);
        if (s.size() == 1)
            return true;
        return false;
    }
    int sumOfDigits(int n)
    {
        int res = 0;
        string s = to_string(n);
        for (int i=0; i<s.size();i++)
            res += s.at(i) - '0';
        return res;
    }
    int addDigits(int num)
    {
        while (!isOneDigit(num))
            num = sumOfDigits(num);
        return num;
    }
};
