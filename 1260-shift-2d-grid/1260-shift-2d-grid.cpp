class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size(),0));
     
        while(k--){
            int tmp = grid[grid.size()-1][grid[0].size()-1];
            for(int i=grid.size()-1; i >=0;i--){
                for(int j=grid[i].size()-1; j>0;j--){
                        grid[i][j]=grid[i][j-1];
                }
                if(i!=0)
                    grid[i][0]=grid[i-1][grid[i-1].size()-1];
            }        
            grid[0][0]=tmp;
        }
        return grid;
    }
}; 