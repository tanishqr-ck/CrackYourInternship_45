class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        queue<int> a;
        vector<int> vis(V+1,0);
        vis[0]=1;
        a.push(0);
        ans.push_back(0);
        while(!a.empty())
        {
            int y=a.front();
            a.pop();
            for(auto x:adj[y])
            {
                if(vis[x])
                continue;
                ans.push_back(x);
                vis[x]=1;
                a.push(x);
            }
        }
        return ans;
    }
};