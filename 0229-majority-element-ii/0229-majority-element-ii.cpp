class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int, int> track;
        int mn = (nums.size()/3)+1;

        for(int i=0; i<nums.size(); i++){
            track[nums[i]]+= 1;

            if(track[nums[i]] == mn){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};