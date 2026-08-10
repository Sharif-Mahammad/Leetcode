class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0, top=0, tracker = 1;
        int bottom=n-1, right = n-1;
        vector<vector<int>> a(n, vector<int>(n, 0));

        while(left <= right && top <= bottom){
            
            //left to right
            for( int j=left; j<=right; j++){
                a[top][j] = tracker++;
            }
            top++;

            //top to bottom
            for( int i=top; i<=bottom; i++){
                a[i][right] = tracker++;
            }
            right--;


            //right to left
            if(top<=bottom){
                for( int j=right; j>=left; j--){
                    a[bottom][j] = tracker++;
                }
                bottom--;
            }

            //bottom to top
            if(left <= right){
                for( int i=bottom; i>=top; i--){
                a[i][left] = tracker++;
                }
                left++;
            }
        }
        return a;
    }
};