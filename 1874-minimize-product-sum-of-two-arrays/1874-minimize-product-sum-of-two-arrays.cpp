class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        priority_queue<int, vector<int>> pq;
        
        for(int num : nums2){
            pq.push(num);
        }
        
        int sum=0;
        
        for(int i=0;i<nums2.size();i++){
            sum+=nums1[i]*pq.top();
            pq.pop();
        }
    return sum;
    }
};