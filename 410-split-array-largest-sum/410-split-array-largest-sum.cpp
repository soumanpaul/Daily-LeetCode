class Solution {
public:
    int minimumSubarrayRequired(vector<int>& nums, int maxSumAllowed){
        int currentSum = 0;
        int splitsRequired =0;
        for(int element : nums){
            if(currentSum + element <= maxSumAllowed){
                currentSum += element;
            }else {
                currentSum = element;
                splitsRequired ++;
            }
        }
        return splitsRequired + 1;
    }
    
    int splitArray(vector<int>& nums, int m) {
        // Find the sum of all emements and max element
        int sum = 0;
        int maxElement = INT_MIN;
        for(int element : nums){
            sum += element;
            maxElement = max(maxElement, element);
        }
        
        // Define the left and right boundary of BS
        int left = maxElement;
        int right = sum;
        int minimumLargestSplitSum = 0;
        
        while(left <= right) {
        // Find the mid value
            int maxSumAllowed = left + (right - left) /2;
            
            if(minimumSubarrayRequired(nums, maxSumAllowed) <= m){
                right = maxSumAllowed - 1;
                minimumLargestSplitSum = maxSumAllowed;
            }else {
                left = maxSumAllowed +1;
            }
        }
        return minimumLargestSplitSum;
    }
};