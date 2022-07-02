// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    
	    if(d==s) return 1;
	    
	    vector<int> adj[n];
	    int count=0;
	    for(vector<int> x : edges){
	        adj[x[0]].push_back(x[1]);
	    }
	    queue<int>q;
	    q.push(s);
	    while(q.empty()==false){
	        int u = q.front();
	        q.pop();
	        for(int x : adj[u]){
	            if(x==d){
	                count++;
	            }else q.push(x);
	            
	        }
	    }
	   return count; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends