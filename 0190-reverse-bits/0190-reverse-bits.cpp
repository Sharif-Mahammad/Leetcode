class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0; i<31; i++){
            // extracting the bit value from n at that position and
            // inserting the bit value to ans value
            ans = ans | (n>>i & 1);
            // moving the ans bits by one for each bit in n
            ans = ans << 1;
        }
        
        return ans;
    }
};