class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
    
        return max(dfs(nums, 0, n-2), dfs(nums,1,n-1));
    }

    int dfs(vector<int>&nums, int start, int end){
        int len = end - start +1;
        if(len == 1) return nums[start];
        if(len ==2) return max(nums[start],nums[start+1]);
        vector<int> tab(len+1);
        tab[0] = nums[start];
        tab[1] = max(nums[start],nums[start+1]);

        for(int i=2;i<len;i++){
            tab[i] = max(nums[i+start]+tab[i-2],tab[i-1]);
        }
        return tab[len-1];
    }
};
