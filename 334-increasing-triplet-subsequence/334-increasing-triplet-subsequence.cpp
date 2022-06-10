class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int sm=INT_MAX, md=INT_MAX;
        for(int i=0; i< nums.size();i++){
            if(nums[i] <= sm) sm = nums[i];
            else if(nums[i] <= md) md = nums[i];
            else return true;
        }
        return false;
    }
};