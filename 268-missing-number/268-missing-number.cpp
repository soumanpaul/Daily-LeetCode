class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int number=nums.size();
        for(int i=0; i < nums.size(); i++){
            number ^= i ^ nums[i];
        }
        return number;
    }
};