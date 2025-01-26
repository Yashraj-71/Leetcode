class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0, negative = 0;
        
        for (int num : nums) {
            if (num < 0) {
                negative++;
            } else if (num > 0) {
                positive++;
            }
        }

        return max(positive, negative);
    }
    
};