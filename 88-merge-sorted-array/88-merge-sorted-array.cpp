class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        if (m == 0) {
            nums1 = nums2;
            return;
        }
        if (n == 0)
            return;
        int L[m], R[n];

        for (int i = 0; i < m; i++)
            L[i] = nums1[i];
        for (int j = 0; j < n; j++)
            R[j] = nums2[j];

        int k = 0;
        int i = 0, j = 0;

        while (i < m && j < n){
            if (L[i] <= R[j]) {
                nums1[k] = L[i];
                i++;
            } else {
                nums1[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < m) {
            nums1[k] = L[i];
            i++;
            k++;
        }
        while (j < n) {
            nums1[k] = R[j];
            j++;
            k++;
        }
    }
};