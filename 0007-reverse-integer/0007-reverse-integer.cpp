class Solution {
public:
    int reverse(int x) {
        int q=x,r=0;
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
            return r;
        }
        else
        return 0;
    }
};