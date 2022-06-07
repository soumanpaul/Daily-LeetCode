class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        
        if (m == 0) {
            nums1 = nums2;
            return;
        }
        if (n == 0)
            return;
        
        int p1=m-1;
        int p2=n-1;
        
        for(int i=n+m-1; i >= 0; i--){
            if(p2<0 || (p1 >=0 && nums1[p1] > nums2[p2])){
                nums1[i]=nums1[p1--];
            }else {
                nums1[i] = nums2[p2--];
            }
        }    
    }
};