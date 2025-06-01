class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v1.push_back(nums[i]);
            }
            else{
                v2.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            nums[2*i]=v1[i];
            nums[2*i+1]=v2[i];
        }
        return nums;
    }
};