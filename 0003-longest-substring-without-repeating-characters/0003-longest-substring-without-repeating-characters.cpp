class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0,temp=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(find(ans.begin(),ans.end(),s[j]) == ans.end())
                {
                    ans.push_back(s[j]);
                    temp++;
                    count=max(count,temp);
                }
                else
                break;
            }
            ans.clear();
            temp=0;
            
        }
        return count;
    }
};