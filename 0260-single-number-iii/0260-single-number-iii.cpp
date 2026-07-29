class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res=0, res1=0, res2=0;
        for(auto it:nums){
            res = res^it;
        }
        int idx=0;
        for(int i=0; i<31; i++){
            if(res & 1<<i)  break;
            idx++;
        }

        for(auto it:nums){
            if(it & 1<<idx) res1 = res1 ^ it;
            else    res2 = res2 ^ it;
        }
        return {res1, res2};
    }
};