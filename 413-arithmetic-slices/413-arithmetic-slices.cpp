class Solution {
public:
    int numberOfArithmeticSlices(vector<int> &nums) {
        if (nums.size() < 3)
            return 0;
        int count = 0, d;
        for (int i = 0; i < nums.size() - 2; ++i) {
            d = nums[i + 1] - nums[i];
            for (int j = i + 2; j < nums.size(); ++j) {
                if (nums[j] - nums[j - 1] == d)
                    ++count;
                else
                    break;
            }
        }
        return count;
    }
};