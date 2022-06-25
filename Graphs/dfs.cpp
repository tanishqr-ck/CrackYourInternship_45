class Solution {
  public:
  vector<int> ans;
  vector<int> a[];
  bool vis[10000];
 
  void dfs(int x,vector<int> adj[])
  {
      if(vis[x])
      return;
      vis[x]=true;
      ans.push_back(x);
      for(auto c:adj[x])
      dfs(c,adj);
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
    for(int i=0;i<V;i++)
    dfs(i,adj);
    return ans;
    }
};