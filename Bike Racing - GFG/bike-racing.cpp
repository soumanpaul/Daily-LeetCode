// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        long low = 0; 
        long high = max(M,L);
        long  tm =0;
        while(low<=high){
            long mid=(low+high)/2;
            long sum=0;
            for(long i=0; i<N;i++){
                if(H[i]+ mid*A[i]>=L)
                    sum+=H[i]+ mid*A[i];
            }
            if(sum>=M) {
                tm=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return tm;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends