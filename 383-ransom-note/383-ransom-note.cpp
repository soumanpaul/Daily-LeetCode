class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch[256] = {0};
        int maga[256] = {0};
        
        for(int i=0; i< magazine.length(); i++){
            maga[magazine[i]]++;
        }
        for(int i=0; i< ransomNote.length(); i++){
           ch[ransomNote[i]]++;
        }
        for(int i=0; i< ransomNote.length(); i++){
           if(ch[ransomNote[i]]>maga[ransomNote[i]])
               return false;
        }
        
        return true;
        
    }
};