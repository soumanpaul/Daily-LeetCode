class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int count=0;
        unordered_multiset<int> map;
        
        for(int i=0; i< nums.size();i++){
            int item = k-nums[i]; 
            auto it = map.find(item);
            if(it !=map.end()){
                map.erase(it);
                count++;
            }else 
                map.insert(nums[i]); 
        }   
        return count;
    }
};