class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length() < s1.length()) return false;

        int left = 0;
        int right =0;
        vector<int> v1(26);
        vector<int> v2(26);

        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
        }
        
        while(right<s2.size()){
            v2[s2[right]-'a']++;
            if((right-left+1) > s1.length()){
                v2[s2[left]-'a']--;
                left++;
            }
            if(v1 == v2) return true;
            right++;
        }
        return false;
    }
};
