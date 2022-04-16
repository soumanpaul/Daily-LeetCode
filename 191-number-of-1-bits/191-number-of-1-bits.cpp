class Solution {
public:
    
    int hammingWeight(uint32_t x) {
        int count=0;
        while(x){
            if(x & 1){
                count++;
            }
         x >>= 1;
        }
        return count;
    }
};