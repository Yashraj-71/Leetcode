class Solution {
public:
    int maxDifference(string s) {
        int maxi=0;
        int even=INT_MAX;
        int odd=INT_MIN;
        unordered_map<char,int> mp;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second%2==1){
                odd=max(it.second,odd);
            }
            else{
                even=min(it.second,even);
            }
        }
        return {odd-even};
    }
};