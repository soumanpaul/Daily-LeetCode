class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(!s.length()) return true;
        if(!t.length()) return false;

        int j=0;
        string str;
        for(int i =0; i<t.length(); i++){
            
            if(t[i] == s[j]){
                j++;
                str +=t[i];
           }
            if(str==s){
                return true;
                break;
            }
           
        }
        return false;
    } 
};