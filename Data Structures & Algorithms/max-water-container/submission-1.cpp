class Solution {
public:
    int maxArea(vector<int>& heights) {
       int left = 0;
       int right = heights.size ()-1;
        int res =0;
       while(left<right){
            int curr = (right-left)*min(heights[left],heights[right]);
            res = max(res,curr);

            if(heights[left] <= heights[right]){
                left++;
            }
            else{
                right--;
            }
       } 
       return res;
    }
};
