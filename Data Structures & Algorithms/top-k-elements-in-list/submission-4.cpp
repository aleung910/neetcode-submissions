class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        unordered_map<int,int>::iterator itr = mp.begin();
        priority_queue<pair<int,int>> maxHeap;
        while(itr!=mp.end()){
            maxHeap.push(make_pair(itr->second,itr->first));
            itr++;
        }

        vector<int>ans;
        for(int i=0;i<k && !maxHeap.empty();i++){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};
