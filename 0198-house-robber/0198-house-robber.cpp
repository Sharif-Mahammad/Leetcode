class Solution {
public:
int dp[101];
    int dc(vector<int>& nums,int i){
        if(i >= nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int l = dc(nums,i+2);
        int r = dc(nums,i+3);
        return dp[i]=max(l,r)+nums[i];
    }

    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return max(dc(nums,0),dc(nums,1));
    }
};