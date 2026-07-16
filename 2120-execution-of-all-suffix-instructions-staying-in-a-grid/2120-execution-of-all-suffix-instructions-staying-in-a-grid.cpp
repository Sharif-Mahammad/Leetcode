class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>ans;
        //traversing n times string
        for(int i=0; i<s.size(); i++){
            int r=startPos[0], c = startPos[1];
            int j=i, moves=0;

            //starting from every subsequence
            while(j<s.size()){
                //tracking present position
                if(s[j] == 'L') c--;
                else if(s[j] == 'R')    c++;
                else if(s[j] == 'U')    r--;
                else if(s[j]   == 'D')  r++;

                //out of boundry condition
                if(r<0 || r>=n || c<0 || c>=n){
                    break;
                }

                //moves track;
                moves++;
                j++;
            }
            ans.push_back(moves);
        }
        return ans;
    }
};