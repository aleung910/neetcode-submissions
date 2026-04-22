class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right= heights.size()-1;
        int max_Area = 0;
        while(left<right){
            int curr = min(heights[left],heights[right]) * (right-left);
            max_Area = max(max_Area, curr);
            
            if(heights[left]<=heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_Area;
    }
};
