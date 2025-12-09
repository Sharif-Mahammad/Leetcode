class Solution {
    public int reverseDegree(String s) {
        char ch[]=s.toCharArray();
        int ans=0;
        for(int i=0; i<ch.length; i++)
        {
            ans+=(26-(ch[i]-97))*(i+1);
        }
        return ans;
    }
}