class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0, second = height.size()-1;
        int area =0;
        while(first < second){
            area = max(area, min(height[first],height[second])*(second -first));
            if(height[first] > height[second]) second--;
            else first++;
        }
        return area;
    }
};