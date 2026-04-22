class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r = 0;
        unordered_map<char,int> mp;
        int len =0;
        int maxChar = 0;
        //maybe go thru entire and then 
        while(r<s.length()){
            mp[s[r]]++;
            maxChar = max(maxChar, mp[s[r]]);
            //window is invalud, mismatch characters 
            //so shrinks the window
            while((r-l+1) - maxChar > k){
                mp[s[l]]--;
                l++;
            }

            len = max(len, r-l+1);
            r++;
        }
        return len;
    }
};
