class Solution {
public:
    string longestPalindrome(string s) {
        int len =0;
        int index = 0; int n = s.size();
        for(int i=0;i<n;i++){
            int l = i; int r=i;

            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    index = l;
                }
                l--; //acting as i can be midpoint
                r++;
            }
            l = i; r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    index = l;
                }
                l--; //acting as i can be midpoint
                r++;
            }
        }
        return s.substr(index,len);
    }
};
