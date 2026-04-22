class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        int l = 0; int r = height.size()-1;
        int res =0;
        
        int leftMax = height[l], rightMax = height[r];
        while(l<r){
            if(leftMax<rightMax){
                l++;
                leftMax = max(leftMax, height[l]);
                // max wall on that side – height at that position`
                res+= leftMax - height[l];
            }    
            else{
                r--;
                rightMax = max(rightMax, height[r]);
                res+= rightMax - height[r];
            }
        }
        return res;
    }
};
