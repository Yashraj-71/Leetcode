class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        
        int n=s.length();
       
        string f="";
        for(int i=0;i<n;i++){
            string ans="";
            while( i<n && s[i]!=' '){
            ans+=s[i];
            i++;
            }
            reverse(ans.begin(),ans.end());
            if(ans.length()>0){
                f+=" "+ans;        
            }
                
        }
        return f.substr(1);
    }
};