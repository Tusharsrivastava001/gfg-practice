class Solution {
  public:
    bool dfs(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &pathvis){
        
        vis[node]=1;
        pathvis[node]=1;
        for(auto ele : adj[node]){
            if(!vis[ele]){
                if(dfs(ele,adj,vis,pathvis)) return true;
            }
            else if(pathvis[ele]) return true;
        }
        pathvis[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
    vector<vector<int>> adj(V);
    for(auto ele : edges){
        int u=ele[0];
        int v=ele[1];
        adj[u].push_back(v);
    }
    
    vector<int> vis(V,0);
    vector<int> pathvis(V,0);
    
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(dfs(i,adj,vis,pathvis)){
                return true;
            }
    }
        
    }
    return false;
    
    }
};