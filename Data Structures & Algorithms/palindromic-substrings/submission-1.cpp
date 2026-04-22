class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<int> tab(n+1);

        //is a new palindrome if a single char
        //if even and both chars the same
        //if odd where mid is char and tab[i+1][j-1] is the same

        int substrings =0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        // for(int i=n;i>=0;i--){
        //     for(int j = i;j<s.size();j++){
               
        //        if(s[i]==s[j] && ((j-i<=2) || dp[i+1][j-1])){
        //             dp[i][j] = true;
        //             substrings++;
        //        }
        //     }
        // }
        for(int i=0;i<n;i++){

            int l = i ; int r = i;
            while(l>=0 && r<n && s[l]==s[r]){
                substrings++;
                l--;
                r++;
            }

            l= i ; r= i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                substrings++;
                l--;
                r++;
            }
        }
        return substrings;
    }
};
