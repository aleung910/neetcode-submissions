class Solution {
vector<vector<int>> memo;
public:
    int lengthOfLIS(vector<int>& nums) {
    
        int n = nums.size();
        memo = vector<vector<int>>(n,vector<int>(n+1,-1));
        return dfs(nums,0,-1);
    }
    private:
    //RECURSION CHOCIES skip or include if valid to explore all possible choices recursively
    int dfs(vector<int>&nums, int i, int j){
        if(i==nums.size()) {
            return 0;
        }
        if(memo[i][j+1]!=-1){
            return memo[i][j+1];
        }
        
        int lis = dfs(nums,i+1,j); //skipping

        //ONLY INLUDE IF LARGER THJAN PAST ONE

        if(j== -1 || nums[j] < nums[i]){
            lis = max(lis, 1+dfs(nums,i+1,i));
        }
        memo[i][j+1] = lis;
        return lis;
    }
};
