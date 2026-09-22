class Solution {
public:

    bitset<30>c, d1, d2;
    int cnt=0;
    void solve(int row,int n){
        if(row == n){
            cnt++;
            return;
        }

        for(int col=0; col<n; col++){
            if(c[col] == 0 && d1[row+col] == 0 && d2[row-col+(n-1)] == 0){
                c[col] = 1;
                d1[row+col] = 1;
                d2[row-col+(n-1)] = 1;

                solve(row+1, n);

                // back tracking
                c[col] = 0;
                d1[row+col] = 0;
                d2[row-col+(n-1)] = 0;
            }
        }
        // return;
    }

    int totalNQueens(int n) {
        cnt=0;
        solve(0, n);
        return cnt;
    }
};

