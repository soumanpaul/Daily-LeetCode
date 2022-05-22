class Solution {
public:
    bool isPalindrom (string str){
        int low=0, high=str.length()-1;
        while(low < high){
            if(str[low]!=str[high]){
                return false;
            }
            low++;high--;
        }
        return true;
    }
    int countSubstrings(string str) {
        
        int count =0;
        for (int i = 0; i < str.length(); i++) {
            string subStr;

            for (int j = i; j < str.length(); j++) {
            
                subStr += str[j];
                if(isPalindrom(subStr)){
                    count++;
                }
                
            }
        }
        return count;
    }
};