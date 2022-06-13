// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	void computeLPSArray(string s, int M, int lps[]){
	    int len =0;
	    int i;
	    
	    lps[0] =0;
	    i =1;
	    
	    while(i < M){
	        if(s[i] == s[len]){
	            len++;
	            lps[i] = len;
	            i++;
	            
	        }else {
	            if(len !=0){
	                len = lps[len-1];
	                
	            }else {
	                lps[i] = 0;
	                i++;
	            }
	        }
	    }
	}
		
	int isRepeat(string s)
	{
	    // Your code goes here
	    int n = s.length();
	    int lps[n];
	    
	    computeLPSArray(s,n,lps);
	    
	    int len = lps[n-1];
	    
	    return (len > 0 &&  n % (n-len) ==0) ? true : false;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends