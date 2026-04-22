class Solution {
// vector<vector<int>> memo;
vector<int> memo;

public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memo.resize(n,-1);
        int maxLIS = 1;
        for(int i=0;i<n;i++){
            //exclude choice dfs(i+1,j) acts as that loop
            //because can start at any index need ot check every as possuible staritng..
            maxLIS = max(maxLIS, dfs(nums,i));
        }
        return maxLIS;
    }

private:
    //RECURSION CHOCIES skip or include if valid to explore all possible choices recursively
    int dfs(vector<int>&nums, int i){
        if(memo[i]!=-1) return memo[i];
        int n = nums.size();
        int lis =1;
        //LOOKING AT EVERY POSSIUBLE INDEX THAT COMES AFTER I...
        //ONLY CONSIDER IF LARGER THAN NUMS[I] , 
        //it recurses to ask for j what is the longest i j... and maximizes
        for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]){
                lis = max(lis,1+dfs(nums,j));
            }
        }
        return memo[i] = lis;
    }
};
