class Solution {
public:

    vector<string>fun(int n){
        if(n==1)    return {"0","1"};
        vector<string>prev;
        prev = fun(n-1);
        vector<string>temp;
        for(int i=0; i<prev.size(); i++){
            temp.push_back(prev[i]+"0");
        }
        for(int i=prev.size()-1; i>=0; i--){
            temp.push_back(prev[i]+"1");
        }
        return temp;
    }

    vector<int> grayCode(int n) {
        vector<string>ans = fun(n);
        vector<int>res;
        for(auto it:ans){
            res.push_back(stoi(it, nullptr, 2));
        }
        return res;
    }
};