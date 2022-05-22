class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        vector<int> res;
        res.push_back(intervals[0][0]);
        res.push_back(intervals[0][1]);

        for(int i=1; i < intervals.size(); i++){

            if(res[1] >= intervals[i][0]){
                // cout << intervals[i][1] <<" " << res[1]
                if(intervals[i][1] > res[1]){
                    res.pop_back();
                    res.push_back(intervals[i][1]);
                }
            }else{
                ans.push_back(res);
                res.clear();
                res.push_back(intervals[i][0]);
                res.push_back(intervals[i][1]);
            }
        }
        ans.push_back(res);
        
       return ans;
    }
};