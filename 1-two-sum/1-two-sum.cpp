class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {     
        unordered_map<int, int> se;
        for(int i=0; i<nums.size();i++){
            auto itr = se.find((target-nums[i]));
            if( itr!= se.end()){
                return {itr->second,i};
            }
            se.insert({nums[i], i});
        }
        return {};
    }
};