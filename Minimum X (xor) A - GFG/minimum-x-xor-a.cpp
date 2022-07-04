// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int countB=0;
        int B=b;
        while(B){
            countB+=B%2;
            B/=2;
        }
        int countA = countB;
       
        int x=0;
        
        for(int i =31; i>=0 && countA; i--){
            if(a&(1<<i)){
               x |= (1<<i);
               countA--;
            }
        }
       
        for(int i=0; i<=31 && countA;i++){
            if((x&(1<<i))==0){
                x|=(1<<i);
                countA--;
            }
        }
        return x;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends