class Solution {
public:

    void fun(int &scr, vector<int>&cost, int n, vector<int>&dp){\
        
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int scr=0, n = cost.size();
        vector<int>dp(n,0);
        dp[n-1] = cost[n-1];
        dp[n-2] = cost[n-2];
        for(int i=n-3; i>=0; i--){
            int sub1 = cost[i]+dp[i+1];

            int sub2;
            if(i+2 < n){
                sub2 = cost[i]+dp[i+2];
            }
            dp[i] = min(sub1, sub2);
        }

        for(int it: dp){
            cout<<it<<" ";
        }
        return min(dp[0], dp[1]);
    }
};