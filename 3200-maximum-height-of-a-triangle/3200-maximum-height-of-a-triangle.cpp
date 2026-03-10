class Solution {
public:

    int fun(int n, int it){
        int cnt=0;
        while(it < n-1){
            cnt+=it;
            it+=2;
        }
        return cnt;
    }

    int maxHeightOfTriangle(int red, int blue) {
        if(red ==1 && blue ==1) return 1;
        int mn,mx;
        if(red <= blue){  
            mn = red; 
            mx = blue;
        }
        else{ 
            mn = blue;
            mx = red;
        }
        int i=1, j=2;
        int mn1 = mn;
        while(1){
            if(mn1 < 0)  break;
            mn1-= i;
            i+=2;
        }
        while(1){
            if(mn < 0) break;
            mn-= j;
            j+=2;
        }
        if(i>j){
            int od = i;
            int c = fun(od, 2);
            if(c <= mx)   return i-3;
            else return i-4;
        }
        else{
            int ev = j;
            int c = fun(ev, 1);
            if(c <= mx) return j-3;
            else return j-4;
        }
        
    }
};