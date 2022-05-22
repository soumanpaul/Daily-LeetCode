class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes=0, candidate=-1;
        
        for(int i=0; i<nums.size(); i++){
            if(votes==0){
                candidate = nums[i];
                votes=1;
            } else {
              if(nums[i]==candidate)
                  votes+=1;
              else votes-=1;  
            }
        }
        int count=0;
        for(int i=0; i< nums.size();i++){
            if(candidate==nums[i])
                count++;
        }
        if(count > nums.size()/2)
            return candidate;
        return 0;
    }
};