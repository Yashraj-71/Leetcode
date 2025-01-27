class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, mx = 0, Count = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                Count++;
            }
            while (Count > k) {
                if (nums[left] == 0) {
                    Count--;
                }
                left++;
            }
            mx = max(mx, right - left + 1);
        }

        return mx;
    }
    
};