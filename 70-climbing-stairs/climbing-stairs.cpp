class Solution {
public:
    int solve(int n,vector<int>& dp){
        if(n<=2) return n;
        if(dp[n] != -1) return dp[n];

        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];

    }
    int climbStairs(int n) {
    // brute force krdia shi
    // if(n<=2) return n;

    // return climbStairs(n-1)+climbStairs(n-2);
        vector<int>dp(46,-1);
       return  solve(n,dp);
    }
};