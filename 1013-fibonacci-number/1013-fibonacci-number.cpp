class Solution {
public:
    int fib(int n) {
        vector<int>v1(n+1,-1);   // memoization
        return fib1(n,v1);
    }
    int fib1(int n, vector<int>&v){
        if(n <= 1){
            v[n] = n;
            return v[n];
        }
        if(v[n] != -1){
            return v[n];
        }
        v[n] = fib1(n-1,v) + fib1(n-2,v);
        return v[n];
    }
};