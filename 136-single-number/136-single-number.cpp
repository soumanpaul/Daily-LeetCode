class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        
        for(int i=0; i<len-1;i++){
            nums[i+1]^=nums[i];
        }   
        return nums[len-1];
    }
};