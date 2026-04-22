class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //using an unordered set here because yk

        unordered_set<int>ms;
        for(int num:nums){
            if(ms.count(num)) return true;
            ms.insert(num);
        }
        return false;
    }
};