class Solution {
public:
    string convert(string s, int n) {
        string ans="";
        // int sSize=s.size();
        if(n==1) return s;
        for(int i=0; i<n; i++){
            int j=i;
            bool flag=true;
            while(j<s.size()){
                if(i == 0){
                    ans+=s[j];
                    j += (n-(i+1))*2;
                }
                else if(i == n-1){
                    ans+=s[j];
                    j += i*2;
                }
                else{
                    ans+=s[j];
                    if(flag){
                        flag = false;
                        j += (n-(i+1))*2;
                    }
                    else{
                        j += i*2;
                        flag=true;
                    }
                }
            }
        }
        return ans;
    }
};