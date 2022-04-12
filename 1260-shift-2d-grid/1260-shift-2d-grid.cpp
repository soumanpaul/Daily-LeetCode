class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int numCols = grid[0].size();
        int numRows = grid.size();
        
        vector<vector<int>> newGrid(numRows,vector<int>(numCols,0));
        
        for(int row=0; row < numRows; row++){
            for(int col=0; col < numCols; col++){
                int newCol = (col+k) % numCols;
                int numInc = (col+k) / numCols;
                int newRow = (numInc + row) % numRows;
                newGrid[newRow][newCol] = grid[row][col];
            }
        }
        return newGrid;
    }
}; 