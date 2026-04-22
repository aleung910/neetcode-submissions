class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sellingPrice = prices[0];
        int maxProfit =0;
        for(int i=1;i<prices.size();i++){
           sellingPrice = min(sellingPrice, prices[i]);
           maxProfit = max(maxProfit, prices[i]- sellingPrice);
        }
        return maxProfit;
    }
};
