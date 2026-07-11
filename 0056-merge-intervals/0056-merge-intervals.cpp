class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& mat) {
        sort(mat.begin(), mat.end());
        int n = mat.size();
        for(int i=0; i<n-1; i++){
            if(mat[i][1] >= mat[i+1][0]){
                mat[i][0] = min(mat[i][0], mat[i+1][0]);
                mat[i][1] = max(mat[i][1], mat[i+1][1]);
                mat.erase(mat.begin()+i+1);
                n--;
                i--;
            }
        }
        return mat;
    }
};