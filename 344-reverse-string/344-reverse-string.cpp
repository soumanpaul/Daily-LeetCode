class Solution {
public:
    void reverseStr(vector<char>& s, int low, int high){
        if(low < high){
            swap(s[low],s[high]);
            reverseStr(s,low+1, high-1);
        }
    }
    void reverseString(vector<char>& s) {
            reverseStr(s,0,s.size()-1);
    }
};