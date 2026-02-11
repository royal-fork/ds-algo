class Solution {
public:

    double solver(double x,long long n){
        //base case for 0 values
        if(n==0)   return 1;
        if(n<0)    return solver(1/x,-n);
        if(n%2==0) return solver(x*x,n/2);
        // if(n%2==1) 
        return x*solver(x*x,(n-1)/2);

    }
    double myPow(double x, int n) {
       
        long long nn=n;

        return solver(x,nn);
        
    }
};