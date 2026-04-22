class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> tab(n,vector<bool>(n,false));
        int len =0;
        int index = 0;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j] && ((j-i+1)<=2 || tab[i+1][j-1])){
                    tab[i][j] = true;
                    if(len < (j-i+1) ){
                        len = j-i+1;
                        index =i;
                    }
                }
            }
        }
        return s.substr(index,len);
    }
};
