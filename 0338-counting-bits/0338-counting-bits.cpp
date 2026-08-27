class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0; i<=n; i++){
            int cnt=0;
            int j=0;
            while((i>>j) > 0){
                if(((i>>j) & 1)==1)  cnt++;
                j++;
            }
            ans.push_back(cnt);
        }
        return ans;  
    }
};