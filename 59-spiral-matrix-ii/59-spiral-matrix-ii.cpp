class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int>(n));
        
        
        int cnt = 1;
        for(int layer = 0; layer < (n+1)/2; layer++){

            for(int i=layer; i < n-layer;i++){
                result[layer][i] = cnt++;
            }    
            for(int i=layer+1; i < n-layer; i++){
                result[i][n-layer-1] = cnt++;
            }
            for(int i=n-layer-2; i >= layer; i--){
                result[n-layer-1][i] = cnt++;
            }
            for(int i= n -layer -2; i > layer; i--){
                result[i][layer] = cnt++;
            }
        }
        return result;
    }
};