class Solution {
public:
    int minDistance(string word1, string word2) {
        
        vector<int> dp (word2.length()+1);
        
        for(int i = 0; i <= word1.length(); i++){
            vector<int> temp(word2.length()+1);
            for(int j=0; j<= word2.length(); j++){
                if(i==0 || j ==0)
                    temp[j] = i + j;
                else if(word1[i-1] == word2[j-1])
                    temp[j] = dp[j-1];
                else
                    temp[j] = 1+ min(dp[j], temp[j-1]);
            }
            dp=temp;
        }
        return dp[word2.length()];
    }
};