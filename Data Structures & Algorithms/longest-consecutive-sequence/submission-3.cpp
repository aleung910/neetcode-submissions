class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ms(nums.begin(),nums.end());
        unordered_set<int>::iterator itr = ms.begin();

        int longest = 0;
        while(itr!=ms.end()){
            if(!ms.count(*itr-1)){
                int count =1;
                while(ms.count(*itr+count)){
                    count++;
                }
                longest = max(longest,count);
            }
            itr++;
        }
        return longest;
    }
};
