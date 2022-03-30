class Solution {
    bool result;
public:
    
    int binarySearch(vector<int>& arr, int l, int r, int x) {
        if (l <= r) { 
            int mid = l + (r - l) / 2; 
            if (arr[mid] == x) 
                return 1; 
            if (arr[mid] > x) 
                return binarySearch(arr, l, mid - 1, x); 
            return binarySearch(arr, mid + 1, r, x); 
        } 
        return false; 
    } 
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result = false;
        int m  = matrix.size(), n = matrix[0].size();
        int pivotIdx, pivotElement, left = 0, right = m*n-1;
         
        if (m == 0)
            return false;
        
        while(left <= right){  
            pivotIdx = (left + right) /2;
            pivotElement = matrix[pivotIdx / n][pivotIdx % n];
            
            if(target == pivotElement){
                return true;
            }
            else {
                if(target < pivotElement)
                    right = pivotIdx -1;
                else
                    left = pivotIdx + 1;
            }
        }
            
        return false;
    } 
};