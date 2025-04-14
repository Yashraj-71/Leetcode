class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    if(arr.size()<3) return 0;
        int count=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int val=arr[i];
            for(int j=i+1;j<n;j++){
                int valj=arr[j];
                for(int k=j+1;k<n;k++){
                    int valk=arr[k];
                    if(abs(val-valj)<=a && abs(valj-valk)<=b && abs(val-valk)<=c) count++;
                }
            }
        }
        return count;
        
    }
};