class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int start = 0, max_len = 0, i = 0;
        
        for (i = 0; i < s.size(); ++i) {
            if (map.find(s[i]) != map.end()) {
                start = max(start, map[s[i]] + 1);
            }
            map[s[i]] = i;
            max_len = max(max_len, i - start + 1);
        }
        
        return max_len;
    }
};
