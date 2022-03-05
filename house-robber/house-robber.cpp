class Solution {
    vector<int> dp;
public:
    Solution(): dp(100, -1){
        
    }
    int rob(vector<int>& nums) {
        return robRecurr(nums,nums.size()-1);
    }
    int robRecurr(vector<int>& nums,int n){
        if(n<=0) return nums[0];
        if(n==1) return max(nums[0],nums[1]);
        if(dp[n]==-1)
            dp[n] = max(robRecurr(nums,n-1),robRecurr(nums,n-2)+nums[n]);
        return dp[n];
    }
};