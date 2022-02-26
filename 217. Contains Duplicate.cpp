
class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        set<int> arrSet;
        for (int i = 0; i < nums.size(); i++) {
            if (arrSet.find(nums[i]) != arrSet.end()) {
                return true;
            }
            arrSet.insert(nums[i]);
        }
        return false;
    }
};