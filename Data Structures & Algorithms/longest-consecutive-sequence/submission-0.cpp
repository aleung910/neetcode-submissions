class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //consecutive so can use a set to find if within +=1 or not
        int longest =0;
        unordered_set<int>ms(nums.begin(),nums.end());
        for(int num:nums){
            if(ms.find(num-1)==ms.end()){
                int curr = 1;
                while(ms.find(num+curr)!=ms.end()){
                    curr++;
                }
                longest = max(longest,curr);
            }
        }
        return longest;
    }
};
