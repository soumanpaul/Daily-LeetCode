class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int ptr_zero=0;
        for(int ptr_num=0; ptr_num < nums.size();ptr_num++){
            if(nums[ptr_num]!=0){
                swap(nums[ptr_num], nums[ptr_zero]);
                ptr_zero++;
            }
        }
    }
};