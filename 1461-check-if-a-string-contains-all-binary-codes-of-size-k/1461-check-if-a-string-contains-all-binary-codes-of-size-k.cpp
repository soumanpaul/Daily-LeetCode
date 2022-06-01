class Solution {
public:
    bool hasAllCodes(string s, int k) {
        const int powK= 1 << k;
        int need = powK;
        vector<bool> found(need, false);
        int curr =0;
        
        for(int i=0; i <s.size(); i++){
            curr <<=1;
            curr&=~powK;
            if(s[i]=='1') curr |=1;
    
            if(i >=k-1 && !found[curr]){
                found[curr] = true;
                need--;
                if(need==0)
                    return true;
            }
        }
        return false;
    }
};