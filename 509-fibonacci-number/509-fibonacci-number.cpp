class Solution {
    int dp[31];
public:
    
    int fib(int n) {
        if(n<2) return n;
        if(!dp[n])
            dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
};