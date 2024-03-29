void dfs(int i, vector<int>&vis, vector<int>&ans, vector<vector<int>> &adj)
{
    if(vis[i]==1) return;
    vis[i] = 1;
    ans.push_back(i);

    for(auto it  : adj[i])
    {
        if(!vis[it])
        {
            dfs(it, vis, ans, adj);
        }
    }



}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{

    vector<vector<int>> adj(V);
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector<int> vis(V,0);
    vector<vector<int>> res;

    for(int i=0;i<adj.size();i++)
    {
        vector<int>ans;
        if(!vis[i])
        {
            dfs(i, vis, ans, adj);
            res.push_back(ans);

        }
    }

    return res;
  
}
