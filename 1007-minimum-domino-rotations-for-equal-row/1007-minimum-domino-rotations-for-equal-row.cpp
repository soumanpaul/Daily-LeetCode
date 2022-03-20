class Solution {
public:
    int check(int x, vector<int>& A, vector<int>& B, int n){
        
        int aRotation=0, bRotation=0;
        for(int i = 0; i<n; i++){
            if(A[i] != x && B[i] != x) return -1;
            else if(A[i]!= x) aRotation++;
            else if(B[i] != x) bRotation++;
        }
        return min(aRotation , bRotation);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        int rotations = check(tops[0], bottoms, tops, n);
        
        if(rotations !=-1 || tops[0] == bottoms[0]) return rotations;
        else return check(bottoms[0], tops, bottoms, n);
    }
};