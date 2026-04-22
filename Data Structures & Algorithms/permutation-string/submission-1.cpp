class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length() < s1.length()) return false;
        vector<int> v1(26);
        vector<int> v2(26);
        for(char c:s1){
            v1[c-'a']++;
        }

        int l =0;
        for(int r=l;r<s2.length();r++){
            v2[s2[r]-'a']++;
            if((r-l+1) > s1.length()){
                v2[s2[l]-'a']--;
                l++;
            }
            if(v1==v2) return true;
        }
        return false;
    }
};
