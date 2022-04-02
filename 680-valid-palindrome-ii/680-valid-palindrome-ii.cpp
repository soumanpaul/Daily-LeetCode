class Solution {
public:
    bool isPalindrome(string s, int i){
        string st =s;
        st.erase(i,1);
        int first =0, second = st.length()-1;
        while(first < second){
            if(st[first] != st[second])
                return false;
           first++;
            second--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        bool pel = true;
        int count = 0;
        
        int first =0, second = s.length()-1;
        while(first < second){
            if(s[first] != s[second]){
              // if(s[first+1] == s[second] && count < 1){
                  if(isPalindrome(s,first)){
                   return true; 
                  }
                // else{
                //     count++;
                //     second--;
                //   }
                // }else  if(s[first] == s[second-1]  && count < 1){
                 else if(isPalindrome(s,second)){
                    return true; 
                  }
                // else{
                //     count++;
                //    first++;
                //   }
                // }
                else {
                   return false;  
                }
            }
            
           first++;
            second--;
        }
        return pel;
    }
};