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

        for(int i=0; i<nums.size(); i++){
            int numerator = nums[i];
            int fact = sieve[numerator];
            while(numerator / fact != 1){
                prem.insert(fact);
                numerator = numerator / fact;
                fact = sieve[numerator];
            }
            prem.insert(fact);
        }
        return prem.size();
        
    }
};