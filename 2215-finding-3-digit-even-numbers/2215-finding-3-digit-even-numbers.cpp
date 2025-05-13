class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> digitFreq(10, 0);
        for (int &digit : digits) {
            digitFreq[digit]++;
        }
        vector<int> result;
        for (int num = 100; num < 999; num += 2) {
            vector<int> currentFreq(10, 0);
            int temp = num;
            while (temp > 0) {
                currentFreq[temp % 10]++;
                temp /= 10;
            }
            bool isValid = true;
            for (int d = 0; d < 10; ++d) {
                if (currentFreq[d] > digitFreq[d]) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};