class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>> maxHeap;
        unordered_map<int,int>::iterator itr = mp.begin();

        while(itr!=mp.end()){
            maxHeap.push(make_pair(itr->second,itr->first));
            itr++;
        }

        for(int i=0;i<k && !maxHeap.empty();i++){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;

    }
};
