class Solution {
public:
    int heightChecker(vector<int>& heights) {   
        int c=0;
        vector<int>expected = heights;
        sort(expected.begin(), expected.end());
        for (int i=0;i<heights.size(); i++)
        {
            if (expected.at(i) != heights.at(i))
                c++;
        }
        return c;
    }
};
