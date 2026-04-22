class Solution {
public:
    bool isAnagram(string s, string t) {
        //anagrams if they both have same values of letters in each
        //leads me to want to use a map
        int n = s.length(); int m = t.length();
        if(n!=m) return false;

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        for(auto& [first,second]:mp){
            if(second!=0){
                return false;
            }
        }
        return true;
    }
};
