class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1, el2, cnt1=0, cnt2=0;
        vector<int>ans;
        for(auto it:nums){
            if(cnt1 == 0 && it != el2){
                cnt1+= 1;
                el1 = it;
            }
            else if(cnt2 == 0 && it != el1){
                cnt2 += 1;
                el2 = it;
            }
            else if(it == el1)    cnt1+= 1;
            else if(it == el2)    cnt2+= 1;
            else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0, cnt2=0;
        for(auto it:nums){
            if(it == el1)   cnt1++;
            if(it == el2)   cnt2++;
        }

        if(cnt1 >= (nums.size()/3)+1)  ans.push_back(el1);
        if(cnt2 >= (nums.size()/3)+1)  ans.push_back(el2);

        return ans;
    }
};