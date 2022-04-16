class Solution {
public:
    
    int hammingWeight(uint32_t x) {
        int count=0;
        while(x != 0){
            // if(x & 1){
            //     count++;
            // }
         // x >>= 1;
            count++;
            x &= (x-1);
        }
        return count;
    }
};