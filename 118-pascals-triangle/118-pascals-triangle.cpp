class Solution {
    int memo[1000][1000];
public:
     
    int getTri(int rowIndex, int colIndex){
        
        if(colIndex==0 ||  rowIndex == 0 || rowIndex == colIndex)
            return 1;
        
        if(memo[rowIndex][colIndex])
            return memo[rowIndex][colIndex];
        
        memo[rowIndex][colIndex] = getTri(rowIndex-1,colIndex-1) + getTri(rowIndex-1,colIndex);
        
        return memo[rowIndex][colIndex];
        
    }
    
    vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>> result;
        
        for(int i=0; i< numRows; i++){ 
            vector<int> ans;
            for(int j=0; j<= i; j++){
                if(memo[i][j]){
                    ans.push_back(memo[i][j]);    
                }
                
                else ans.push_back(getTri(i,j));
            }
            result.push_back(ans);
        }
        
        return result;
    }
};
