class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maxi=1;
        if (nums.empty()) {
                return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            
            if(nums[i]==nums[i-1]){
                continue;
            }
           else if(nums[i]==nums[i-1]+1){
            count++;
           }
           else{
            maxi=max(maxi,count);
            count=1;
           }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};
