// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long S, long long N, long long x, long long A[])
    {
        // code here
        // unordered_map<long long, long long> sequence;
        
        // sequence[S]++;
        long long total=S;
        vector<long long> vec;
        vec.push_back(S);
        
        for(long long  i=0; i <N; i++){
            long long item=total+A[i];
            vec.push_back(item);
            if(item>=x) break;
            total+=item;
        }
      
        long long k = vec.size()-1;
        while(x>0 && k>=0){
            if(x>=vec[k]) x-=vec[k];
            k--;
        }
        if(x==0) return 1;
    
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends