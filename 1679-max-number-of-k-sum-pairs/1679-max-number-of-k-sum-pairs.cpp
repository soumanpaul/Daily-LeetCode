class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> map;
        for(int i=0; i< nums.size();i++){
            int item = k-nums[i]; 
            if(map[item]>0){
                map[item]-=1;
                count++;
            }else 
                map[nums[i]]+=1; 
        }   
        return count;
    }
};