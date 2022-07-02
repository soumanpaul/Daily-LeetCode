#define mod 1000000007

class Solution {
    
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(), horizontalCuts.end());
        
        int maxV=verticalCuts[0], maxH=horizontalCuts[0];
        
        horizontalCuts.push_back(h%mod);
        verticalCuts.push_back(w%mod);
        
        for(int i=1; i < horizontalCuts.size(); i++){
            int diff =(horizontalCuts[i]%mod)-(horizontalCuts[i-1]%mod)%mod;
            maxH = max(maxH,diff)%mod;
           
        }
        
         for(int i=1; i < verticalCuts.size(); i++){
             int diff = (verticalCuts[i]%mod)-(verticalCuts[i-1]%mod);
            maxV = max(maxV, diff)%mod;
        }
       
        return int((long)maxV%mod*maxH%mod);
        
    }
};