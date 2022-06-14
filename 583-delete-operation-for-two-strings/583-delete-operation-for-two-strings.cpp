class Solution {
public:
    
    int lcs(string word1,string word2,int m,int n,vector<vector<int>> &memo){
        
        if(m==0 || n==0) return 0;
        
        if (memo[m][n] != -1) {
            return memo[m][n];
        }
        
        if(word1[m-1]==word2[n-1])
          memo[m][n]= 1 + lcs(word1, word2,m-1,n-1,memo);
        
        else
           memo[m][n] = max(lcs(word1,word2,m,n-1, memo), lcs(word1,word2,m-1,n, memo));
        
        return memo[m][n];
    }
    
    
    int minDistance(string word1, string word2) {
        vector<vector<int>> memo(word1.length()+1,vector<int>(word2.length()+1,-1));
        
        return word1.length() + word2.length() - 2 * lcs(word1,word2,word1.length(),word2.length(), memo);
    }
};