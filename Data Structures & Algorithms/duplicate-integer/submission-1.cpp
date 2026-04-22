class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>ms;
        for(int num:nums){
            if(ms.find(num)!=ms.end()){
                return true;
            }
            ms.insert(num);
        }
        return false;
    }
};