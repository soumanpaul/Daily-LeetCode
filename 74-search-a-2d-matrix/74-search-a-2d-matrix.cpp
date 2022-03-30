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
        for(auto x : matrix){
            result = binarySearch(x,0,x.size()-1,target);
            if(result){
                break;
            } 
        }
        return result;
    } 
};