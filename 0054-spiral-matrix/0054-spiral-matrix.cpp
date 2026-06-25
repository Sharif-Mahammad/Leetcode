class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int left=0, top=0;
        int bottom=m.size()-1, right = m[0].size()-1;
        vector<int>a;

        while(left <= right && top <= bottom){
            
            //left to right
            for( int j=left; j<=right; j++){
                a.push_back(m[top][j]);
            }
            top++;

            //top to bottom
            for( int i=top; i<=bottom; i++){
                a.push_back(m[i][right]);
            }
            right--;


            //right to left
            if(top<=bottom){
                for( int j=right; j>=left; j--){
                    a.push_back(m[bottom][j]);
                }
                bottom--;
            }

            //bottom to top
            if(left <= right){
                for( int i=bottom; i>=top; i--){
                a.push_back(m[i][left]);
                }
                left++;
            }
        }
        return a;
    }
};