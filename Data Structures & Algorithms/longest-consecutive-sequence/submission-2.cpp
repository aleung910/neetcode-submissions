class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>ms(nums.begin(),nums.end());
        unordered_set<int>::iterator itr = ms.begin();

        int longest=0;
        while(itr!=ms.end()){
            if(!ms.count(*itr-1)){
                int curr =1;
                while(ms.count(*itr+curr)){
                    curr++;
                }
                longest=max(longest,curr);
            }
            itr++;
        }
        return longest;
    }
};
