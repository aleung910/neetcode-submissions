class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(vector<int>& edge: edges){
            adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].push_back(edge[1]);
        }
        unordered_set<int>ms;
        queue<pair<int,int>> mq;

        mq.push({0,-1});
        ms.insert(0);
        while(!mq.empty()){
            auto [node, parent] = mq.front();
            mq.pop();
            for(int neighbor: adj[node]){
                if(neighbor == parent)continue;
                if(ms.find(neighbor)!=ms.end()) return false;

                ms.insert(neighbor);
                mq.push({neighbor,node});
            }
        }
        return ms.size()==n;
    }
};
