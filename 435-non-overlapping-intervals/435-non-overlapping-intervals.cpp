class Solution {
public:
    
   static bool sortbysec(vector<int>&a, vector<int>&b){
        return (a[1] < b[1]);
    }
  
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(!intervals.size()) return 0;
        
        int count=1;
        sort(intervals.begin(), intervals.end(), sortbysec);
        int end = intervals[0][1];
        int left=0;
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0] >= end){
                end = intervals[i][1];
                count++;
            }
        }
        return intervals.size() - count;
    }
};