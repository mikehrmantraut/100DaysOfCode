class Solution {
    public:
        int binarySearch(vector<int>&nums, int low, int high, int target)
        {
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
    
                if (nums[mid] == target)
                    return mid;
                if (nums[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            return -1;
        }
        vector<int> searchRange(vector<int>& nums, int target)
        {
            if (nums.size() == 0) return {-1, -1};
            int res = binarySearch(nums, 0, nums.size() - 1, target);
            int sec = binarySearch(nums, res, nums.size() - 1, target);
            return {res, sec};
        }
    };