class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long res = 0;
        long long pairs = 0;
        int left = 0;
        
        for (int i = 0; i < nums.size();++i)
        {
            pairs += freq[nums[i]];
            freq[nums[i]]++;
            
            while (pairs >= k)
            {
                res += nums.size() - i;
                freq[nums[left]]--;
                pairs -= freq[nums[left]];
                left++;
            }
        }
        return res;
    }
};
