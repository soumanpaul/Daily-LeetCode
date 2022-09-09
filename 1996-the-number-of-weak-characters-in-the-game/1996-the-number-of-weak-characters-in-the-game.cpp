class Solution {
public:
    static bool  compaire(vector<int> &a, vector<int> &b){
         return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        int ans = 0, max_deff=0;
        sort(properties.begin(), properties.end(), compaire);
        
        for(int i = size(properties) - 1; i >= 0; --i){
            if(properties[i][1] < max_deff) ans+=1;
            else max_deff=max(max_deff, properties[i][1]);
        }
        return ans;
    }
};