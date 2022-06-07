class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        
        if (m == 0  ) {
            nums1 = nums2;
            return;
        }
        if (n == 0)
            return;
        
        int nums1_copy[m];

        for (int i = 0; i < m; i++)
            nums1_copy[i] = nums1[i];
        
        int p1=0;
        int p2=0;
        
        for(int i=0; i < n+m; i++){
            if(p2>=n || (p1 < m && nums1_copy[p1] < nums2[p2])){
                nums1[i]=nums1_copy[p1++];
            }else {
                nums1[i] = nums2[p2++];
            }
        }    
    }
};