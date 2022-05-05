#define mod 998244353

class Solution {
    
public:
    bool isPowerOfTwo(long long int x) {
        return (x && (!(x  & (x - 1)%mod)));
    }
};