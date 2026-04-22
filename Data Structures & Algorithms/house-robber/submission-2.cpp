class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>tab(n+1);

        tab[0] = nums[0];
        tab[1] = max(nums[0],nums[1]);

        for(int i=2;i<=n;i++){
            tab[i] = max(tab[i-2]+nums[i],tab[i-1]);
        }
        return tab[n-1];
    }
};
