class Solution {
public:
    const int modd = 1e9+7;
    long long fact(int n){
        if(n==1 || n==0)    return 1;
        return (n*fact(n-1))%modd;
    }

    int prime(int n){
        int cnt = 0;
        for(int i=2; i<=n; i++){
            int div = 2;
            for(int j=2; j*j<=i; j++){
                if(i%j == 0) div++;

                if(div > 2)    continue;  
            }
            if(div <= 2)    cnt++;
        }
        return cnt;
    }

    int numPrimeArrangements(int n) {
        int cnt = prime(n);
        cout<<cnt<<" "<<n-cnt<<endl;
        return (fact(cnt)*fact(n-cnt))%modd;
    }
};