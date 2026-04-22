class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ms(nums.begin(),nums.end());

        int res = 0;

        unordered_set<int>::iterator itr = ms.begin();
        while(itr!=ms.end()){
            if(!ms.count(*itr-1)){
                int curr = 1;
                while(ms.count(*itr+curr)){
                    curr++;
                }
                res = max(res, curr);
            }
            itr++;
        }
        return res;
    }
};
