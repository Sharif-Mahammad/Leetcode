class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>r(m, 0);
        vector<int>c(n,0);

        for(int i=0; i<m; i++){
            int rSum=0;
            for(int j=0; j<n; j++){
                rSum+=mat[i][j];
            }
            r[i]=rSum;
        }

        for(int j=0; j<n; j++){
            int cSum=0;
            for(int i=0; i<m; i++){
                cSum+=mat[i][j];
            }
            c[j]=cSum;
        }

        int spcl=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==1){
                    if(r[i]==1 && c[j]==1){
                        ++spcl;
                        break;
                    }
                }
            }
        }
        return spcl;
    }

};