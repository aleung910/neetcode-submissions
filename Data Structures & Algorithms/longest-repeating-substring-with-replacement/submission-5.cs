public class Solution {
    public int CharacterReplacement(string s, int k) {
        int l = 0;
        Dictionary<char,int> mp = new Dictionary<char,int>();
        int maxChar =0, maxLen =0;

        for(int r=0;r<s.Length;r++){
            if(mp.ContainsKey(s[r])){
                mp[s[r]]++;
            }
            else{
                mp[s[r]] = 1;
            }
            maxChar = Math.Max(maxChar, mp[s[r]]);

            while((r-l+1)-maxChar> k){
                mp[s[l]]--;
                l++;
            }
            maxLen = Math.Max(maxLen, r-l+1);
        }
        return maxLen;
    }
}
