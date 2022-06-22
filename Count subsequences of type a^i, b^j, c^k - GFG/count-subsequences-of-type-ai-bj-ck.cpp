// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
         long long int a = 0;
       long long int b = 0;
       long long int c = 0;
       
       for(char current : s)
       {
           if(current == 'a')a = (2*a% 1000000007+1)% 1000000007;
           else if(current == 'b')b = (2*b% 1000000007 +a)% 1000000007;
           else c= (2*c% 1000000007 + b)% 1000000007;
       }
       return c % 1000000007;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends