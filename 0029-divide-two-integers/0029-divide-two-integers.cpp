class Solution {
public:
    int divide(int dvd, int div) {
        long long n = dvd, r = div, q=0;
        bool chk = true;

        //base case
        if(n == r)  return 1;

        //handling negative return values
        if(n >= 0 && r < 0) chk = false;
        else if(n < 0 && r >= 0)    chk = false;

        n = llabs(n), r = llabs(r);
        
        int id;
        while(n >= r){
            id = 0;
            while((r << id) <= n){
                id++;
            }
            q+= 1LL << (id-1);

            n = n - (r << (id-1));
        }

        
        if(!chk){
            if(q >= (1LL << 31))   q = INT_MIN;
            if(q < (1LL << 31)) q = -(q);
        }
        else{
            if(q >= (1LL << 31))  q = INT_MAX;
        }

        return (int)q;

    }
};