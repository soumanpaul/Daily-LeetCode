class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),0));
     
        while(k--){
            
            // 1st condition             
            for(int i=0; i <grid.size();i++){
                for(int j=0; j<grid[i].size()-1;j++){
                        ans[i][j+1]=grid[i][j];
                }
            }

            // 2nd condition
             for(int i=0; i <grid.size()-1;i++){
                for(int j=grid[i].size(); j<=grid[i].size();j++){
                        ans[i+1][0]=grid[i][j-1];
                }
            }           
            ans[0][0]=grid[grid.size()-1][grid[0].size()-1];
            
            grid=ans;
        }
        return grid;
    }
}; 