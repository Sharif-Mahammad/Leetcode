class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        for(int i=0; i<32; i++){
            int fstBit = (a>>i) & 1;
            int scnBit = (b>>i) & 1;
            int targetBit = (c>>i) & 1;
            if(targetBit){
                // when we need change bit 0 to 1
                if((fstBit | scnBit) != targetBit)    ans += 1;
                cout<<"1 ";
            }
            else if( !targetBit ){
                // when we need change bit 1 to 0
                if((fstBit | scnBit) != targetBit){
                    // if 2  1's 2 operations
                    if(fstBit & scnBit)    ans += 2;
                    // else atleast one 1 will be there
                    else    ans += 1;
                }
            }
        }
        return ans;
    }
};