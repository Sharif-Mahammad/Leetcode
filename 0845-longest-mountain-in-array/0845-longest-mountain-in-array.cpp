class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int len=1, excp = 0, ans=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > arr[i-1]){
                if(excp == 1){
                    len=1;
                    excp =0;
                }
                len++;
            }
            else if(arr[i] < arr[i-1]){
                if(len > 1){
                    excp = 1;
                    len++;
                    ans = max(ans, len);
                }
                else{
                    len =1;
                }
            }else{
                len = 1;
                excp = 0;
            }
        }
        return ans;
    }
};