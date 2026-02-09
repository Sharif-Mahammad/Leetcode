class Solution {
public:
    string longestNiceSubstring(string s) {
        set<char>st(s.begin(), s.end());
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){
                if(st.find(tolower(s[i]))==st.end()){
                    string s1 = longestNiceSubstring(s.substr(0, i));
                    string s2 = longestNiceSubstring(s.substr(i+1));
                    if(s1.size() >= s2.size()) return s1;
                    else return s2;
                }   
            }   
            else{
               if(st.find(toupper(s[i]))==st.end()){
                    string s1 = longestNiceSubstring(s.substr(0, i));
                    string s2 = longestNiceSubstring(s.substr(i+1));
                    if(s1.size() >= s2.size()) return s1;
                    else return s2;
                }
            }
        }
        return s;
    }
};