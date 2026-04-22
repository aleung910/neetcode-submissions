class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];
        
        int currMax = 1; int currMin = 1;

        //CURRMIN is the minimum product 
        //

        for(int num:nums){
            int tmp = currMax * num;

            currMax = max(num, max(tmp, currMin*num));
            currMin = min(num, min(tmp, currMin*num));
            res = max(res, currMax);

        }
        return res;
    }
};
