class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int k;
        for(int i=0;i<n;i++){
            int start=max(0,i-nums[i]);
            int sum=0;
            for(int j=start;j<=i;j++){
                sum+=nums[j];
                
            }
            sum1+=sum;
        }
        return sum1;
    }
};