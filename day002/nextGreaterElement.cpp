class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>v;
        bool flag;
        for (int i=0; i<nums1.size(); i++)
        {
            auto it = find(nums2.begin(), nums2.end(), nums1.at(i));
            if (it != nums2.end())
            {
                flag = false;
                while (++it != nums2.end())
                {
                    if (nums1.at(i) < *it)
                    {
                        v.push_back(*it);
                        flag = true;
                        break;
                    }
                }
                if (!flag)
                    v.push_back(-1);
            }
        }
        return (v);
    }
};
