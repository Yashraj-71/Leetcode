class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> pr(n),suff(n);
        pr[0] = height[0];
        for (int i = 1; i < n; i++) {
            pr[i] = max(pr[i - 1], height[i]);
        }

        suff[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],height[i]);
        }

        int res=0; 
        for (int i = 1; i < n - 1; i++) {
            res+=min(pr[i],suff[i])-height[i];
        }
        return res;
    }
};