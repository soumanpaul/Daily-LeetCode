
class NumMatrix {
   
    int aux[200][200];
public:
    NumMatrix(vector<vector<int>>& matrix) {
      
        for(int i=0; i< matrix[0].size(); i++)
            aux[0][i] = matrix[0][i];

        for(int i=1; i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
                aux[i][j]=aux[i-1][j]+matrix[i][j];

        for(int i=0;i<matrix.size();i++)
            for(int j=1;j<matrix[0].size();j++)
                aux[i][j]+=aux[i][j-1];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum = aux[row2][col2];
        
        if(row1>0)
            sum-=aux[row1-1][col2];
        
        if(col1>0)
           sum-=aux[row2][col1-1];
        
        if(row1 > 0 && col1>0)
            sum+=aux[row1-1][col1-1];
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */