// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b){
    return (a.second > b.second);
    }
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        if(!T) return 0;
        
        vector<pair<int,int>> vec(N);
        
        for(int i=0; i < N; i++){
                pair<int,int> pr = make_pair(A[i],B[i]);
                vec.push_back(pr);
        }
        sort(vec.begin(), vec.end(), sortbysec);
        int count =0;
        
        for(auto x : vec){
            if(T>0){
                if(T>= x.first){
                    T-=x.first;
                    count+=x.second*x.first;
                }else{
                    count+=x.second*T;
                    T=0;
                }
            }else break;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends