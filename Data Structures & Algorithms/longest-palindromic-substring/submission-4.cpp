class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int index = 0;
        int string_len = 0;
        vector<vector<bool>> tab(n,vector<bool>(n,false));
        for(int i=n;i>=0;i--){
            for(int j=i;j<n;j++){

                int len = j-i+1;
                if(s[i]==s[j] && (len<=2 || tab[i+1][j-1] )){
                    tab[i][j]= true;
                    if(len>string_len){
                        string_len = len;
                        index= i;
                    }
                }
            }
        }
        return s.substr(index,string_len);
    }
};
