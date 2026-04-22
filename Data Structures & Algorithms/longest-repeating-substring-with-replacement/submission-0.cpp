class Solution {
public:

    int characterReplacement(string s, int k) {
        unordered_map<char,int> count;
        int ans=0;  
        int maxc=0;

        int left=0;
        int right = 0;
        while(right<s.size()){
            count[s[right]]++;
            maxc = max(maxc, count[s[right]]);

            while((right-left+1)- maxc > k){
                count[s[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
