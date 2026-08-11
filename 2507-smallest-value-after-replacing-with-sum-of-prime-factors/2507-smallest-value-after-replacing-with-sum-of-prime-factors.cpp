class Solution {
public:

    int max = 1e5;
    vector<int>sieve;

    void fun(int n){
        
        for(int i=0; i<=n; i++)    sieve.push_back(i);

        sieve[0] = sieve[1] = 2;
        for(int i=2; i*i<=n; i++){
            if(sieve[i] == i){
                for(int j = i*i; j<=n; j+=i){
                    if(sieve[j] == j)   sieve[j] = i;
                }
            }
        }
    }

    int smallestValue(int n) {
        if(n==4)    return 4;
        fun(n);
        
        while(n != sieve[n]){
            
            int temp = n, factSum=0;
            while(temp != sieve[temp]){
                factSum += sieve[temp];
                temp = temp/sieve[temp];
            }
            n = temp+factSum;
        }

        return n;
    }
};