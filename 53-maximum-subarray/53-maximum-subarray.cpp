class Solution {
    
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>subarray;
        int result = nums[0];
        int curr = nums[0];
        int s = 0;
        for(int i=1; i< nums.size();i++){
            curr = max(curr+nums[i], nums[i]);
            result = max(result,curr);
            // if(curr > result){
            //     subarray.clear();
            //     subarray.push_back(s);
            //     subarray.push_back(i);
            // }
            // if(curr < 0){
            //     curr = 0;
            //     s = i+1;
            // }
        }
        // cout << "subarray[0] :" << subarray[0] << " Subarray[1] :"<<subarray[1] <<endl;
        return result;
    }
};