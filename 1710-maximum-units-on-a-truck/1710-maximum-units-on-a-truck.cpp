class Solution {
public:
    struct Comparator{
        
     bool operator()(vector<int> &p1, vector<int> &p2){
        return p1[1] < p2[1];
    }
    };
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    priority_queue< vector<int>, vector<vector<int>>, Comparator> queue;
    
    for(auto boxType : boxTypes){
        queue.push(boxType);
    }
    
    int unitCount = 0;
    while(!queue.empty()){
        vector<int> top = queue.top();
        queue.pop();
        int boxCount = min(truckSize, top[0]);
        unitCount += boxCount * top[1];
        truckSize -= boxCount;
        if(truckSize == 0)
            break;
    }    
        return unitCount;
    }
};