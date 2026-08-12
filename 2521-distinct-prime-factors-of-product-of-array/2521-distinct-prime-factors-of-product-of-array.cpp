class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());

        vector<int>sieve;
        for(int i=0; i<=n; i++){
            sieve.push_back(i);
        }

        for(int i=2; i*i<=n; i++){
            if(sieve[i] == i){
                for(int j = i*i; j<=n; j+=i){
                    if(sieve[j] == j)    sieve[j] = i;
                }
            }
        }
        
        unordered_set<int>prem;

        for(int x: nums){
            while(x>1){
                prem.insert(sieve[x]);
                x /= sieve[x];
            }
        }
        return prem.size();
        
    }
};