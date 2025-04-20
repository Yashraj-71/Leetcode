class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        long long ans = 0;
        int n = nums.size();
        
        for (int j = 0; j < n; ++j) {
            int low = lower_bound(nums.begin() + j + 1, nums.end(), lower - nums[j]) - nums.begin();
            int high = upper_bound(nums.begin() + j + 1, nums.end(), upper - nums[j]) - nums.begin();
            ans += (high - low);
        }
        
        return ans;
    }
};
