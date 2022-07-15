// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        if(n==1) return arr[0];
        long long int  m1=0,m2=0;
    
        // Your code goes here
        sort(arr, arr+n);
        
        for(int i=0; i<n; i+=2){
            m1=m1*10 + arr[i];
        }
     
     for(int i=1; i<n; i+=2){
            m2=m2*10 + arr[i];
        }
       
 
     
        return m1+m2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends