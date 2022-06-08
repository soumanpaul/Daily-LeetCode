class Solution {
public:
    int minSwaps(vector<int>& data) {
        
        int count =0;
        for(int i=0; i<data.size();i++){
            if(data[i])count+=1;
        }
        
        int minm=0;
        int len=0;        
        for(int j=0; j<count; j++){
            if(!data[j]) len++;
        }   
        minm=len;
        for(int i=1; i<data.size()-count+1;i++){
            if(data[i-1]==0) len--;
            if(!data[i+count-1]) len++;
            minm=min(minm, len);
        }
        return minm;
    }
};