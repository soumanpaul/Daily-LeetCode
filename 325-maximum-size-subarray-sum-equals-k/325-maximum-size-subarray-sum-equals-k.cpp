class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        long long prefixSum =0;
        int longestSubarray = 0;
        unordered_map<long long, int> indices;
        
        for(int i=0; i < nums.size(); i++){
            prefixSum +=nums[i];
            
            if(prefixSum == k) {
                longestSubarray = i+1;
            }
            if(indices.find(prefixSum -k) != indices.end()){
                longestSubarray = max(longestSubarray, i- indices[prefixSum-k]);
            }
            if(indices.find(prefixSum)==indices.end()){
                indices[prefixSum] = i;
            }
        }
        return  longestSubarray;
    }
};