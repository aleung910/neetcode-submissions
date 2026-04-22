public class Solution {
    public bool CheckInclusion(string s1, string s2) {
        if(s1.Length > s2.Length) return false;

        int []v1 = new int[26];
        int []v2 = new int[26];

        foreach (char c in s1) v1[c-'a']++;

        int l =0;
        for(int r=0;r<s2.Length;r++){
            v2[s2[r]-'a']++;
            if((r-l+1)>s1.Length){
                v2[s2[l]-'a']--;
                l++;
            }
            if(v1.SequenceEqual(v2)) return true;
        }
        return false;
    }
}
