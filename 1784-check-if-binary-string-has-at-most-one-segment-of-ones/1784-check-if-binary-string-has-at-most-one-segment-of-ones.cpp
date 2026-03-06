class Solution {
public:
    bool checkOnesSegment(string s) {
        bool pre=true;
        for(auto it: s){
            if(it == '0' && pre == true)    pre = false;
            else if(it == '1' && pre == false) return false;
        }
        return true;
    }
};