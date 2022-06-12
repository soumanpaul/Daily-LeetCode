// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	vector<vector<int>> dp;
	int grouping(string str, int index, int sum){
	    
	    int ans=0;
	    if(index==str.length()) return 1;
	    if(dp[index][sum]!=-1) return dp[index][sum];
	    
	    int currentsum=0;
	    
	    for(int i=index; i< str.length();i++){
	        currentsum+=str[i]-'0';
	        if(currentsum >=sum)
	           ans+= grouping(str, i+1,currentsum);
	    }
	    return dp[index][sum]=ans;
	}
	
	int TotalCount(string str){
	   int count=0;
	   int n= str.length();
	   dp.resize(n, vector<int>(9*n,-1));
	   return grouping(str,0,0);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends