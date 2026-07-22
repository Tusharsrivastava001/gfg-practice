class Solution {
  public:
    void dfs(int node,vector<vector<int>> &adj,vector<bool> &vis,vector<int> &v){
        vis[node]=true;
        v.push_back(node);
        
        for(auto ele : adj[node]){
            if(!vis[ele]){
                dfs(ele,adj,vis,v);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        std::vector<int> v;
        vector<bool> vis(adj.size(),false);
        dfs(0,adj,vis,v);
        return v;
        
    }
};