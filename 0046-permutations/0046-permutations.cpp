class Solution {
public:

    void dfs(vector<int>nums, vector<int>vis, vector<int>temp, vector<vector<int>>&ans, int n){
        if(temp.size() == n) {
            ans.push_back(temp);
            return;
        }

        for(int i=0; i<n; i++){
            if(vis[i] == 0){
                temp.push_back(nums[i]);
                vis[i] = 1;
                dfs(nums, vis, temp, ans, n);
                vis[i] = 0;
                temp.pop_back();
            }
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int>vis(n,0);
        vector<vector<int>>ans;
        vector<int>temp;

        dfs(nums, vis, temp, ans, n);
        return ans;
    }
};