class Solution {
public:
    bool isSatisifed(int* v1, int*v2){
        //checks that at go thru list without false,
        //have everything needed and dups which is ok
        for(int i=0;i<128;i++){
            if(v1[i] > v2[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        
        if(t.empty()) return "";
        int startIdx = -1;
        int mp[128] = {0};
        int mp2[128] = {0};
        int minLen = INT_MAX;

        //using unsigned char when dont know either -a or -A
        for(char c:t){
            mp[(unsigned char)c]++;
        }

        int l =0;
        for(int r =l;r<s.size();r++){
            mp2[(unsigned char)s[r]]++;

            //
            while(isSatisifed(mp,mp2)){
                if(r-l+1 < minLen ){
                    minLen = r-l+1;
                    startIdx = l;
                }
                
                mp2[(unsigned char)s[l]]--;
                l++;
            }

        }
        return startIdx == -1 ? "" : s.substr(startIdx, minLen);

    }
};
