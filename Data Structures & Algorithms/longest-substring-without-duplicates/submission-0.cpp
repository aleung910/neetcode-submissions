class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        unordered_set<char> ms;
        int l =0, r = 0; 

        while(r<s.length()){
            while(ms.count(s[r])){
                ms.erase(s[l]);
                l++;
            }
            len = max(len, r-l+1);
            ms.insert(s[r]);
            r++;
        }
        return len;
    }
};
