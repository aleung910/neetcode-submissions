class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        unordered_map<int,int>::iterator itr = mp.begin();
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minHeap;

        for(auto&entry : mp){
            minHeap.push({entry.second,entry.first});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        vector<int>ans;
        for(int i=0;i<k && !minHeap.empty();i++){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
