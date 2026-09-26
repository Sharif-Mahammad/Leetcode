class Solution {
public:

    bool isValid(int i, int j, int cnt, string &word, vector<vector<char>>&board, vector<vector<int>>&vis, int m, int n){
        if(i < 0 || i>=m || j<0 || j >= n || vis[i][j] == 1 || board[i][j] != word[cnt]){
            return false;
        }
        return true;
    }

    int r[4] = {1, 0, 0, -1};
    int c[4] = {0, -1, 1, 0};
    bool solve(int i, int j, int cnt, string &word, vector<vector<char>>&board, vector<vector<int>>&vis, int m, int n){
        if(cnt == word.size()){
            return true;
        }
        bool chk = false;

        vis[i][j] = 1;
        for(int k=0; k<4; k++){
            int newi = i+r[k];
            int newj = j+c[k];

            if(isValid(newi, newj, cnt, word, board, vis, m, n)){
                chk = solve(newi, newj, cnt+1, word, board, vis, m, n);
                if(chk) return true;
            }
        }
        vis[i][j] = 0;
        return chk;
    }


    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>>vis(m, vector<int>(n,0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(word[0] == board[i][j]){
                    bool output = solve(i, j, 1, word, board, vis, m, n);
                    if(output)  return true;
                }
            }
        }
        return false;
    }
};