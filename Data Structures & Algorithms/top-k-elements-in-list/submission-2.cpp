class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //using an priorty_queue to track 
        unordered_map<int,int>mp;
        priority_queue <pair<int,int>>mq;

        for(int num:nums){
            mp[num]++;
        }
        unordered_map<int,int>::iterator itr = mp.begin();
        while(itr!=mp.end()){
            mq.push(make_pair(itr->second,itr->first));
            itr++;
        }
        vector<int>ans;
        for(int i=0;i<k && !mq.empty();i++){
            ans.push_back(mq.top().second);
            mq.pop();
        }
        return ans;
    }
};
