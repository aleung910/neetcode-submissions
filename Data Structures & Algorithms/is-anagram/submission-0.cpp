class Solution {
public:
    bool isAnagram(string s, string t) {
        //anagram has same amt of letters of each 
        //BC if len is diffrent than obv not an anagram
        if(t.length() !=s.length()) return false;
        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        unordered_map<char,int>::iterator itr = mp.begin();
        while(itr!=mp.end()){
            if(itr->second!=0) return false;
            itr++;
        }
        return true;
    }
};
