class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int preSum =0, cnt=0;
        mp[0]=1;
        for(auto it:nums){
            preSum+= it;
            int remove = preSum - k;
            cnt += mp[remove];
            mp[preSum] += 1;
        }
        return cnt;
    }
};