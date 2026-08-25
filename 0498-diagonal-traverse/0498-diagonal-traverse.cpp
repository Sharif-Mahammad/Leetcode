class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int r=0,c=0,x=0,m=mat.size(),n=mat[0].size();
        vector<int>ans;
        vector<int>res;
        while(r<=m-1 && c<=n-1)
        {
           int i=r,j=c;
            while(i<m && i>=0 && j<n && j>=0)
            {
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
            if(x%2==0)
            {
                reverse(ans.begin(), ans.end());
            }
            res.insert(res.end(), ans.begin(), ans.end());
            ans.clear();
            if(i<m)
            {
                if(c==n-1)
                r++;
                else
                c++;
            }
            else
            {
                if(c!=n-1)
                c++;
                else
                r++;
            }
            x++;
        }
        return res;
    }
};