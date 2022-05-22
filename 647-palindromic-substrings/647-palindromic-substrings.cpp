class Solution {
public:
    string s;
    vector<vector<int>>dp;
    
    int f(int l , int r){
        if(l>r)return 1;
        if(l==r)return 1;
        if(dp[l][r]!=-1)return dp[l][r];
        if(s[l]!=s[r])return dp[l][r]=0;
        if(f(l+1,r-1))return dp[l][r]=1;
        return dp[l][r]=0;
    }
    
    int countSubstrings(string s) {
        this->s=s;
        int ans=0,n=s.size();
        dp.resize(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ans+=f(i,j);
            }
        }
        return ans;
    }
};




