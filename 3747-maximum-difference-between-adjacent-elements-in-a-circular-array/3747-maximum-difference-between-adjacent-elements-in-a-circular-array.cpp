class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        
        int maxi=0;
        for(int i=0;i<n-1;i++){
            int diff=0;
            diff=abs(nums[i]-nums[i+1]);
            maxi=max(maxi,diff);
        }       
        int newdiff=abs(nums[n-1]-nums[0]);
        maxi=max(maxi,newdiff);
        return maxi;
    }
};