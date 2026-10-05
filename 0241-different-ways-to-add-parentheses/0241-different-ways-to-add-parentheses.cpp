class Solution {
public:

    bool check(string temp, char plus, char minus, char star){
        for(auto it: temp){
            if(it == plus || it == minus || it == star){
                return false;
            }
        }
        return true;
    }

    int fun(char ch, int leftOp, int rightOp){
        int Val;
        if(ch == '+')  Val = leftOp+rightOp;
        else if(ch == '-')  Val = leftOp - rightOp;
        else if(ch == '*')  Val = leftOp * rightOp;
        else if(ch == '/')  Val = leftOp / rightOp;
        return Val;
    }

    // new recursion fun to solve in subparts like trees
    vector<int> solve(string s){
        int n = s.size();
        vector<int>ans;
        
        // fun call to check base case(whether it is a single number)
        if(check(s, '+', '-', '*')){
            ans.push_back(stoi(s));
            return ans;
        }
        
        // loop for extracting different possibilities of parenthesis
        for(int i=0; i<=n-1; i += 1){
            // if at char, divide into left and right sub problems
            if(!isdigit(s[i])){
                string temp1 = s.substr(0, i);
                vector<int>left = solve(temp1);     //(2)
                string temp2 = s.substr(i+1, n);
                vector<int>right = solve(temp2);    //(1-1)

                // Combine every possible left result with every possible right result
                for(int x: left){
                    for(int y:right){
                        ans.push_back(fun(s[i], x, y));
                    }
                }
            }
        }
        return ans;
    }


    vector<int> diffWaysToCompute(string s) {
        //main funtion
        return solve(s);
    }
};