class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int l =0; int r = 0;
        int profit = 0;
        while(r<nums.size()){
            if(nums[l] < nums[r]){
                profit = max(profit,nums[r]-nums[l]);
            }
            else{
                l=r;
            }
            r++;
        }
        return profit;
    }
};
