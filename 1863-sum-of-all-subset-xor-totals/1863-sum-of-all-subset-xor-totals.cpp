class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(int i=1; i<(1<<n); i++){
            int xors = 0;
            for(int j=0; j<n; j++){
                if(((i>>j)&1) == 1){
                    xors = xors^nums[j];
                }
            }
            sum += xors;
        }
        return sum;
    }
};