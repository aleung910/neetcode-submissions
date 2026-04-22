class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        //try to use bfs here using a stack because if seen before than i know 
        //that its not a validTree with a cycle

        unordered_set<int> ms;
        queue<pair<int,int>> mq; //bfs queue

        vector<vector<int>>adj(n);
    
        //using indexing here with adj
        for(vector<int>& edge: edges){
            adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].push_back(edge[1]);
        }
   
          //nNodes labled from 0 to n-1 so 0 will always be root here
        mq.push({0,-1});
        ms.insert(0);

        while(!mq.empty()){
            auto [curr, parent] = mq.front();
            mq.pop();
            for(int neighbor: adj[curr]){
                if(neighbor == parent) continue;
                if(ms.count(neighbor)) return false;

                ms.insert(neighbor);
                mq.push({neighbor,curr});
            }
        }
        return ms.size() == n;
    }
};
