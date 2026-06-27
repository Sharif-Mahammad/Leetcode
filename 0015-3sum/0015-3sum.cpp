class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(i > 0 && nums[i] == nums[i-1])   continue;
            int j = i+1, k = n -1, sum;
            while(j<k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)    j++;
                else if(sum > 0)    k--;
                else{
                    vector<int>temp = {nums[i], nums[j], nums[k]};
                    res.push_back(temp);

                    while(j < k && nums[j] == nums[j+1])    j++;
                    while(j < k && nums[k] == nums[k-1])    k--;

                    j++;
                    k--;
                }
            }
        }
        return res;
    }
};