// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> ans;
    void solve(int n , vector<string>&d, string s, int cur, string a){
        if(cur >=s.size()){
            ans.push_back(a.substr(1));
            return;
        }
        for(int i=0; i < n; i++){
            string x = d[i];
            string y = s.substr(cur, x.size());
            if(x==y){
                string z = a+" "+ x;
                solve(n,d,s,cur+x.size(), z);
            }
        }
        return;
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s){
        string a="";
        solve(n,dict,s,0,a);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends