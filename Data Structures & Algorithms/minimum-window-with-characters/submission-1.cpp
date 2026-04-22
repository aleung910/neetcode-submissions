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
        unordered_map<char,int> mp, mp2;
        int minLen = INT_MAX;

        //using unsigned char when dont know either -a or -A
        for(char c:t){
            mp[(unsigned char)c]++;
        }

        int have = 0, need = mp.size();
        int l =0;
        for(int r =l;r<s.size();r++){
            char c = (unsigned char)s[r];
            mp2[c]++;

            if(mp.count(c) && mp[c] == mp2[c]){
                have++;
            }

            //
            while(have==need){
                if(r-l+1 < minLen ){
                    minLen = r-l+1;
                    startIdx = l;
                }

                mp2[(unsigned char)s[l]]--;
                //after removing left most
                //check if we broke the requirment lose point
                if(mp.count(s[l]) && mp2[s[l]] < mp[s[l]]){
                    have--;
                }
                l++;
            }

        }
        return startIdx == -1 ? "" : s.substr(startIdx, minLen);

    }
};
