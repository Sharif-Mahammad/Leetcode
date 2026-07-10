class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size(), streak=1;
        vector<int>ans;

        for(int i=0; i<n; i++){
            if(i>0){
                if(nums[i] == nums[i-1]+1){
                    streak++;
                }
                else{
                    streak = 1;
                }
            }

            if(i >= k-1){
                if(streak >= k){
                    ans.push_back(nums[i]);
                }
                else{
                    ans.push_back(-1);
                }
            }
        }

        return ans;
    }
};