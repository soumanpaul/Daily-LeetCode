class Solution {
public:
    bool isSubsequence(string s, string t) {
        int leftBound = s.length();
        int rightBound = t.length();
        int pLeft = 0;
        int pRight = 0;
        
        while(pLeft < leftBound && pRight < rightBound) {
            if(s.at(pLeft) == t.at(pRight)){
                pLeft+=1;
            }
            pRight+=1;
        }
        return pLeft == leftBound;
    } 
};