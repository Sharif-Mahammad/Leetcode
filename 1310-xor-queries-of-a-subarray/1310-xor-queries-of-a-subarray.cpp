class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>bitVal; vector<int>ans;
        bitVal.push_back(arr[0]);
        // bitVal arr for storing bit values of arr from 0 to that specific idx
        for(int i=1; i<arr.size(); i++){
            bitVal.push_back(bitVal[i-1]^arr[i]);
        }

        // giving xor for that specific idx by removing unnecessary xor sum from bitVal
        for(int i =0; i<queries.size(); i++){
            int stIdx = queries[i][0], endIdx = queries[i][1], val;
            if(stIdx != 0)  val = bitVal[endIdx] ^ bitVal[stIdx-1];
            else    val = bitVal[endIdx];
            ans.push_back(val);
        }
        return ans;
    }
};