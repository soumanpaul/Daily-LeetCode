class Solution {
public:
    int trailingZeroes(int n){
        int temp = n;
        int f=5;
        int count=0;
        
        while(f<=temp){
            count+=temp/f;
            f*=5;
        }
        return count;
    }
    
};