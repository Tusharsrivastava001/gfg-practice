class Solution {
  public:
    bool bfs(int src,vector<vector<int>> &adj,vector<bool> &vis){
        
        queue<pair<int,int>> q;
        q.push({src,-1});
        
        vis[src]=true;
        
        while(!q.empty()){
            auto [node,parent]=q.front();
            q.pop();
            
            for(auto ele : adj[node]){
                if(!vis[ele]){
                    vis[ele]=true;
                    q.push({ele,node});
                }
                else if(ele!=parent){
                    return true;
                }
            }
        }
        return false;
        
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);
    for(auto ele : edges){
        int u=ele[0];
        int v=ele[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<bool> vis(V,false);
    
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(bfs(i,adj,vis)){
                return true;
            }
        }
    }
    return false;
    }
};