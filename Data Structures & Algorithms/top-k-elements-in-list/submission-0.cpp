class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ms;
        for(int i=0;i<nums.size();i++){
            ms[nums[i]]++;
        }
        priority_queue<pair<int,int>> q;
        unordered_map<int,int>::iterator itr = ms.begin();
        while(itr!=ms.end()){
            q.push(make_pair(itr->second,itr->first));
            itr++;
        }
        vector<int>ans;
        for(int i=0;i<k && !q.empty();i++){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
