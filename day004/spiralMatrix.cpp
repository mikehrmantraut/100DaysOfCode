class Solution {
public:
vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int>res;
    int n = matrix.at(0).size(), m = matrix.size();
    int j = 0, k = 0, l = 0, q = 0, z = 0, d = 1, o = 0;

    while (m > 0 && n > 0)
    {
        for (int i = 0 + z; i < matrix.at(j).size() - k; i++)
            res.push_back(matrix.at(j).at(i));
        for (int i = 1 + o; i < matrix.size() - l; i++)
            res.push_back(matrix.at(i).at(matrix.at(i).size()- 1 - k));
        if (m > 1)
            for (int i = matrix.at(matrix.size() - 1 - l).size() - 2 - k; i >= q; i--)
                res.push_back(matrix.at(matrix.size() - 1 - l).at(i));
        if (n > 1)
            for (int i = matrix.size() - l - 2; i > j; i--)
                res.push_back(matrix.at(i).at(q));
        o += 1;
        z += 1;
        k += 1;
        j += 1;
        l += 1;
        q += 1;
        d += 1;
        m -= 2;
        n -= 2;
    }
    return res;
}
};
