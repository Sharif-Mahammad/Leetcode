class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans;
        int m = grid.size(), n = grid[0].size();
        //traversing accross columns
        for(int k=0; k<n; k++){
            int i=0, j=k;

            while(i<=m && j<n){
                //reaches bottom
                if(i==m){
                    ans.push_back(j);
                    break;
                }
                
                //checking adjacent path
                if(j<n-1 && grid[i][j] == grid[i][j+1] && grid[i][j] == 1){
                    i++;
                    j++;
                }
                else if(j>0 && grid[i][j-1] == grid[i][j] && grid[i][j] == -1){
                    j--;
                    i++;
                }
                else{
                    //blocked path
                    ans.push_back(-1);
                    break;
                }
            }
        }
        return ans;
    }
};