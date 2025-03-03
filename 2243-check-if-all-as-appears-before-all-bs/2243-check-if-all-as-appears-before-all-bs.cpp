class Solution {
public:
    bool checkString(string s) {
        bool found = false;
        for (char c : s) {
            if (c == 'b') {
                found = true;
            } else if (found && c == 'a') {
                return false;
            }
        }
        return true;
    }
};
