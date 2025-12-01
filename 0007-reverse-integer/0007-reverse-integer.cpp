class Solution {
public:
    long long reverse(long long x) {
        long long q=x,r=0;
        if(INT_MIN <= x && x <= INT_MAX)
        {
            while(q!=0)
            {
                r=r*10+(q%10);
                q=q/10;
            }
            // cout<<r<<endl;
            // if(x<0)
            // {
            //     x=(-1)*r;
            //     cout<<x<<endl;
            // }
            // else
            // {   
            //     x=r;
            // }
            if(INT_MIN <= r && r <= INT_MAX)
            return r;
            else
            return 0;
        }
        else
        return 0;
    }
};