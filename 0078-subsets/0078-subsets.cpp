class Solution {
public:

    void solve(int idx, vector<int>&nums, vector<vector<int>>&subsets, vector<int>ans){
        if(idx == nums.size()){
            subsets.push_back(ans);
            return;
        }

        // pick
        ans.push_back(nums[idx]);
        solve(idx+1, nums, subsets, ans);
        ans.pop_back();

        // non-pick
        solve(idx+1, nums, subsets, ans);
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>subsets;
        vector<int>ans;
        solve(0, nums, subsets, ans);
        return subsets;
    }
};