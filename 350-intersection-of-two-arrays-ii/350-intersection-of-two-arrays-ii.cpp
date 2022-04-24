class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp1, mp2;
        for(int i=0;i< nums1.size();i++){
           mp1[nums1[i]]++;
        }
        for(int i=0;i< nums2.size();i++){
           mp2[nums2[i]]++;
        }
        for(int x : nums2){
            if(mp1[x]){
                mp1[x]--;
                ans.push_back(x);
            }
        }
        return ans;
    }
};