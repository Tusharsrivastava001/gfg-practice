class Solution {
  public:
    void dfs(int node,vector<vector<int>> &adj,vector<bool> &vis){
        vis[node]=true;
        for(auto ele : adj[node]){
            if(!vis[ele]){
                dfs(ele,adj,vis);
            }
        }
    }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>> adj(V);
        
        //here we have teh make the list of the connecred componet
        for(auto &ele : edges){
            int u=ele[0];
            int v=ele[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(V,false);
        int count=0;
        
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(i,adj,vis);
            }
        }
        return count;
    }
};