class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i< nums.size();i++){
            if(nums[i]==target) {
                
                if(ans.size()==2) ans.pop_back();
                ans.push_back(i);
                if(ans.size()==1) ans.push_back(i);
            }
        }
         if(!ans.size())
            return {-1,-1};
        return ans;
    }
};