// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   
	   vector<vector<int>>ans(matrix.size(), vector<int>(matrix[0].size()));
	   if(!ratInMaze(matrix,ans,0,0)) 
	        return {{-1}};
	   return ans;
	}
    bool inRange(vector<vector<int>> &mat, int i, int j){
        if(i >= mat.size() || j >= mat[0].size() || mat[i][j]==0) return false;
        return true;
    }
    bool ratInMaze(vector<vector<int>> &matrix, vector<vector<int>>&ans, int i, int j){
        if(i == matrix.size()-1 && j==matrix[0].size()-1) {
            ans[i][j]=1;
            return true;
        }
        if(inRange(matrix, i,j)){
            ans[i][j]=1;
            for(int index=1; index <= matrix[i][j] ; index++){
                if(ratInMaze(matrix, ans, i,j+index)) return true;
                if(ratInMaze(matrix, ans, i+index, j)) return true;
            }
            ans[i][j]=0;
        }
        return false;    
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends