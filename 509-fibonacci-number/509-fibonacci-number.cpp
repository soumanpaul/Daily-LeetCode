class Solution {
public:
    int fib(int n) {
        int current = 0;
        int prev1 = 1, prev2 = 0;
        if(n<=1) return n;
        for(int i = 2; i<=n; i++){
            current = prev1+prev2;
            prev2=prev1;
            prev1= current;
        }
       return current;
    }
};