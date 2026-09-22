class Solution {
public:

    bitset<30>c, d1, d2;

    void solve(int row, vector<vector<string>>&ans, vector<string>&board, int n){
        if(row == n){
            ans.push_back(board);
            return;
        }

        for(int col=0; col<n; col++){
            if(c[col] == 0 && d1[row+col] == 0 && d2[row-col+(n-1)] == 0){
                board[row][col] = 'Q';
                c[col] = 1;
                d1[row+col] = 1;
                d2[row-col+(n-1)] = 1;

                solve(row+1, ans, board, n);

                // back tracking
                board[row][col] = '.';
                c[col] = 0;
                d1[row+col] = 0;
                d2[row-col+(n-1)] = 0;
            }
        }
        // return;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        for(int i=0; i<n; i++){
            string s="";
            for(int j=0; j<n; j++){
                s += '.';
            }
            board.push_back(s);
    }

         solve(0, ans, board, n);
        return ans;
    }
};