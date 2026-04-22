class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        unordered_map<char,int>::iterator itr = mp.begin();
        while(itr!=mp.end()){
            if(itr->second != 0){
                return false;
            }
            itr++;
        }
        return true;
    }
};
