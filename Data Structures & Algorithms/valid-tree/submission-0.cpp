class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size() > n-1) return false;

        vector<vector<int>>adj(n);
        for(const auto& edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        queue<pair<int,int>> mq;
        unordered_set<int> ms;
        mq.push({0,-1});
        ms.insert(0);

        while(!mq.empty()){
            auto [node, parent] = mq.front();
            mq.pop();
            for(int neighbor : adj[node]){
                if(neighbor == parent) continue;
                if(ms.find(neighbor)!=ms.end()){ //OR COUNT HERE
                    return false;
                }
                ms.insert(neighbor);
                mq.push({neighbor,node});
            }
        }
        return ms.size() == n;

    }
};
