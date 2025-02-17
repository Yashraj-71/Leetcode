class Solution {
public:
    string findValidPair(string s) {
        string st="";
        unordered_map<char,int> mp;
        for(auto it:s){
            mp[it]++;
        }
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[i-1]){
                if((mp[s[i]]==s[i]-'0') && (mp[s[i-1]]==s[i-1]-'0')){
                    st+=s[i-1];
                    st+=s[i];
                    break;
                }
            }
        }
        return st;
    }
};