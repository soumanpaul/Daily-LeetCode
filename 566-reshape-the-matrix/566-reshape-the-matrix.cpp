class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> vec(r);
        int row=mat.size();
        int col=mat[0].size();
        
        if(row==0 || r*c != row*col) return mat;
        queue<int>queue;

        for(int i=0; i<row;i++){
            for(int j=0;j<col;j++){
                queue.push(mat[i][j]);
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                vec[i].push_back(queue.front());
                queue.pop();}
        }
        // if(!queue.empty()) return mat;
        
        return vec;
    }
};