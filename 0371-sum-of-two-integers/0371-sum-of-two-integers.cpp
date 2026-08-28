class Solution {
public:
    int getSum(int a, int b) {
        int ans =0, carry =0;
        for(int i=0; i<32; i++){
            // extracting single bit
            int fstBit = (a >> i) & 1;
            int scnBit = (b >> i) & 1;
            // appending sum of bits
            ans = ans | ((fstBit ^ scnBit ^ carry) << i);
            // taking carry if sum more than 1
            if((fstBit == 1 & scnBit == 1) || (fstBit == 1 & carry == 1) || (scnBit == 1 & carry == 1))   carry = 1;
            else carry = 0;
        }
        return ans;
    }
};