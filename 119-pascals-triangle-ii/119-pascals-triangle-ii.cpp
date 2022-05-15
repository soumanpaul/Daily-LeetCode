class Solution {
    int memo[1000][1000];
public:
     
    int getTri(int rowIndex, int colIndex){
        if(memo[rowIndex][colIndex]){
            return memo[rowIndex][colIndex];
        }
        if(colIndex==0 || rowIndex == colIndex)
            return 1;
        memo[rowIndex][colIndex] = getTri(rowIndex-1,colIndex-1) + getTri(rowIndex-1,colIndex);
         return memo[rowIndex][colIndex];
    }
    
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for(int i=0; i<= rowIndex; i++){
            
            ans.push_back(getTri(rowIndex,i));
        }
        return ans;
    }
    
};