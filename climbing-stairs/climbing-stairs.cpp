class Solution {
    int memo[46];
public:
    int climbStairs(int n) {
        
        if(n<3) return n;
        
        if(memo[n]) return memo[n];
        
        memo[n]= climbStairs(n-1)+climbStairs(n-2);
        return memo[n];
    }
};