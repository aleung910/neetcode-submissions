class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        //using a queue here to check if cycle exisits
         vector<vector<int>>adj(n);
        for(vector<int>edge: edges){
            adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].push_back(edge[1]);
        }
        queue<pair<int,int>>mq;
        unordered_set<int>ms;
        ms.insert(0);
        mq.push({0,-1});
        while(!mq.empty()){
            auto [curr, parent] = mq.front();
            mq.pop();
            for(int neighbor : adj[curr]){
                if(neighbor == parent) continue;
                if(ms.count(neighbor)) return false;
                ms.insert(neighbor);
                mq.push({neighbor,curr});
            }
        }
        return ms.size() ==n;
    }
};
