class Solution {
public:

    long long fun(int base, long long expo){
        if(expo == 0)   return 1;
        if(expo == 1)   return base;

        long long half = fun(base, expo / 2);
        half = (half * half) % 1000000007;

        if(expo%2 == 0) return half;
        return (half*base)%1000000007;
    }

    int countGoodNumbers(long long n) {
        long long pov, ans, mod = 1000000007;
        pov = n/2;
        long long even = (fun(5, pov))%mod;
        long long odd = (fun(4, pov))%mod;

        if(n%2 == 0){
            ans = (even*odd)%mod;
        }
        else{
            ans = (even*odd*5)%mod;
        }

        return ans;
    }
};