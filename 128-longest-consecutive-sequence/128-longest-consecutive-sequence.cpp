class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int ans=1;
        int count=1;
        sort(nums.begin(),nums.end());
        
        for(int i =1; i< nums.size(); i++){
            if(nums[i]-nums[i-1] == 1) {
                count++;
            }
            else if(nums[i]-nums[i-1] !=0) {
                ans=max(ans,count);
                count=1;
            }
        }
        ans=max(ans,count);
        return ans;
    }
};