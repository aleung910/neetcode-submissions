class Solution {
public:
    unordered_set<string>ms;
    vector<int>memo;
    int maxLen= INT_MIN;

    bool wordBreak(string s, vector<string>& wordDict) {
        ms.insert(wordDict.begin(),wordDict.end());
        memo.assign(s.size(),-1);
        for(const string word:wordDict){
            if((int)word.length()>maxLen){
                maxLen= word.length();
            }
        }

        return dfs(s, 0);
    }
private:
    bool dfs(const string&s , int index){
       if(index==s.size()) return true;
        if(memo[index]!=-1){
            return memo[index]==1;
        }

        int end = min((int)s.size(),index+maxLen);
        for (int i = index; i < end; i++) {
            if (ms.count(s.substr(index,i-index+1))){
                if(dfs(s,i+1)){
                    return memo[index]=1;
                }
            }
        }
       return memo[index]= 0;
    }
};
