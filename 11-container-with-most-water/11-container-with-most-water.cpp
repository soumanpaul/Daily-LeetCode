class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0, second = height.size()-1;
        int area =0;
        while(first < second){
            int diff = second - first;
            int small = min(height[first],height[second]);
            int curr = diff * small;
            if(curr > area) area = curr;
            if(height[first] > height[second]) second--;
            else first++;
        }
        return area;
    }
};