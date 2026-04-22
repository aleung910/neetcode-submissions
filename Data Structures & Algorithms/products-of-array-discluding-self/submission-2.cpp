class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //using a prefix vector
        int n = nums.size();
        vector<int> prefix(n,1);
        int curr = 1;
        for(int i=0;i<n;i++){
            prefix[i] *= curr;
            curr*= nums[i];
        }

        curr = 1;
        for(int i=n-1;i>=0;i--){
            prefix[i] *= curr;
            curr*= nums[i];
        }
        return prefix;
    }
};
