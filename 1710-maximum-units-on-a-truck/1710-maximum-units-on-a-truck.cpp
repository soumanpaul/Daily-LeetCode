class Solution {
public:
  
    static bool compare(vector<int>&a, vector<int>&b){
     return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int ans=0;
        sort(boxTypes.begin(), boxTypes.end(), compare );
        
        for(auto x : boxTypes){
            if(truckSize==0) break;
            int p = truckSize >=x[0] ? x[0]: truckSize ;
            ans += p*x[1];
            truckSize-=p;
        }
        return ans;
    }
};