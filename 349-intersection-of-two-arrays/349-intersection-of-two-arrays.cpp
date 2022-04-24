

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       set<int> mp1, mp2;
        for(int i=0;i< nums1.size();i++){
           mp1.insert(nums1[i]);
        }
        for(int i=0;i< nums2.size();i++){
           mp2.insert(nums2[i]);
        }
        for(int x : mp1){
            if(mp2.count(x)){
                ans.push_back(x);
            }
        }
        return ans;
    }
};