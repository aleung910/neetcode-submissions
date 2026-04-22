class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //using an heap to find the top
        priority_queue<pair<int,int>> mq;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
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
