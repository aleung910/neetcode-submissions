class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size= nums.size();
        vector<int>ans(size,1);
        //curr is running product of so far
        //ans[i] stores product of all elements before i
        int curr=1;
        for(int i=0;i<nums.size();i++){
            ans[i] *=curr;
            curr *=nums[i];
        }

        curr =1;
        //right to left reset to 1 so multiply 
        //prefix values in ans byt running of everything to 
        //the right
        for(int i=size-1;i>=0;i--){
            ans[i] *=curr;
            curr*=nums[i];
        }
        return ans;
    }
};
