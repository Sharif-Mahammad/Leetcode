class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long r=0, m=0, tSwaps=0;
        long long MOD = 1e9 + 7;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < a) nums[i] = 0;
            else if(nums[i] > b)    nums[i] = 2;
            else    nums[i] = 1;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 2){
                r++;
            }
            else if(nums[i] == 1){
                m++;
                if(r > 0)   tSwaps=(tSwaps+r)%MOD;
            }
            else{
                if(r>0) tSwaps=(tSwaps+r)%MOD;
                if(m>0) tSwaps=(tSwaps+m)%MOD;
            }
        }
        return tSwaps;
    }
};