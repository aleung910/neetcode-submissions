class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count =0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));

        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                int len = j-i+1;
                if(s[i]==s[j] && (len<=2 || dp[i+1][j-1])){
                    dp[i][j]=true;
                    count++;
                }
            }
        }
        return count;
    }
};
