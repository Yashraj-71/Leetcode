class Solution {
private:
        bool valid(char ch){
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
                return 1;
            }
            return 0;
        }

        char tolowercase(char ch){
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
                return ch;
            }
            else{
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }

        bool checkpalindrome(string s){
            int start = 0;
            int end = s.length() - 1;
            while(start <= end){
                if(s[start] != s[end]){
                    return 0;
                }
                start++;
                end--;
            }
            return 1;
        }
public:
    bool isPalindrome(string s) {
        string temp = "";  
        
        
        for(int i = 0; i < s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        
        for(int i = 0; i < temp.length(); i++){  
            temp[i] = tolowercase(temp[i]);
        }

        
        return checkpalindrome(temp);
    }
};