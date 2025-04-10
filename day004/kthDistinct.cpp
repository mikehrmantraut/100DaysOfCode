class Solution {
public:
    string kthDistinct(vector<string>& arr, int k)
    {
        unordered_map<string, int>m;
        int c=0;
        for (string a:arr)
            m[a]++;
        for (string a: arr)
        {
            if (m[a] == 1)
            {
                c++;
                if (c == k)
                    return a;
            }
        }
        return "";
    }
};
