class Solution {
public:

    vector<int> genRow(int n){
        vector<int>ans;
        int val=1;
        ans.push_back(val);
        for(int i=1; i<n; i++){
            val = val*(n-i);
            val = val/i;
            ans.push_back(val);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1; i<=numRows; i++){
            result.push_back(genRow(i));
        }
        return result;
    }
};