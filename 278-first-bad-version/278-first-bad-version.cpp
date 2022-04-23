// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int badVersion;   
        badVersion = findBadVersion(0,n-1);       
        return badVersion;
    }
    
    int findBadVersion(int left, int right){
            if(left <= right){
                int mid = left + (right-left)/2;         
                if(isBadVersion(mid)){
                    if(!isBadVersion(mid-1))
                        return mid;
                    return findBadVersion( left, mid);
                }
                else {
                    return findBadVersion(mid+1,right);

                    return mid+1;
                }
            }
        return left;
    }
}; 