class Solution {
public:

    void fun(long long n, long long &ans){
        long long p = 1000;
        while(p <= n){
            ans += (n - p) + 1;
            p *= 1000;
        }
    }

    long long countCommas(long long n) {
        if(n < 1000)    return 0;
        long long ans = 0;
        fun(n, ans);
        return ans;
    }
};