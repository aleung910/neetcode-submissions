class Solution {
public:
    vector<int> dp;
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        dp.resize(amount+1,-1);
        int minCoins = dfs(coins,amount);
        return minCoins == INT_MAX ? -1 : minCoins;
    }

    int dfs(const vector<int>&coins, int amount){
        if(amount==0) return 0;
        if(dp[amount]!=-1){
            return dp[amount];
        }
        int res = INT_MAX;
        for(int coin:coins){
            if(amount-coin>=0){
                int curr = dfs(coins,amount-coin);
                if(curr!=INT_MAX){
                    res = min(res, 1+curr);
                }
            }
        }
        return dp[amount] = res;
    }
};
