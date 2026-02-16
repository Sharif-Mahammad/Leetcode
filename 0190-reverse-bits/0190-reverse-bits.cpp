class Solution {
public:
    int reverseBits(int n) {
        bitset<32>b(n);

        string s = b.to_string();
        reverse(s.begin(), s.end());

        bitset<32>rev(s);
        long ans=rev.to_ulong();
        
        return ans;
    }
};