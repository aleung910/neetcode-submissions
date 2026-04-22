class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ms(nums.begin(),nums.end());
        unordered_set<int>::iterator itr = ms.begin();

        int max_length = 0;

        while(itr!=ms.end()){
            if(!ms.count(*itr-1)){
                int start = 1;
                while(ms.count(*itr+start)){
                    start++;
                }
                max_length = max(start, max_length);
            }
            itr++;
        }
        return max_length;
    }
};
