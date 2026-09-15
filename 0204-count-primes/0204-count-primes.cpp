class Solution {
public:
    int fun(int n){
        vector<bool> sieve(n, 1);
        sieve[0] = 0; sieve[1] = 0;
        sieve[2] = 1;
        for(long long i = 3; i*i < n; i+=2){
            if(sieve[i]){
                for(long long j = i*i; j < n; j += 2*i){
                    sieve[j] = 0;
                }
            }
        }

        int cnt = 1;
        for(int i = 3; i<n; i += 2){
            if(sieve[i])   cnt++;
        }
        return cnt;
    }

    int countPrimes(int n) {
        if(n<=2) return 0;
        int ans = fun(n);
        return ans;
    }
};