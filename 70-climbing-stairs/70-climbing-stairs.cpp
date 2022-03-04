class Solution {
    int dp[46];
public:
    
    int climb(int n){
        if(n<=2) return n;
        if(!dp[n])
            dp[n]=climb(n-1) + climb(n-2);
        return dp[n];
    }
    int climbStairs(int n) {       
        return climb(n);
    }
};