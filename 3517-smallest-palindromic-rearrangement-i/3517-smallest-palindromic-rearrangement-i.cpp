class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;
        for(auto it:s){
            mp[it]++;
        }

        string pdStr="", ch;
        for(auto it:mp){
            if(it.second % 2 != 0){
                ch = it.first;
            }
            pdStr.append(it.second/2, it.first);
        }
        string rvr = pdStr;
        reverse(rvr.begin(), rvr.end());
        pdStr.append(ch);
        pdStr.append(rvr);

        return pdStr;
    }
};