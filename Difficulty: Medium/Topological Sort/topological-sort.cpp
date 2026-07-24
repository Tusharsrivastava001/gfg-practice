class Solution {
  public:
    void dfs(int node,vector<vector<int>> &adj,vector<int> &vis,stack<int> &st){
        vis[node]=1;
        
        
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,st);
            }
        }
        
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>> adj(V);
        
        for(auto ele : edges){
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
        }
        
        vector<int> vis(V,0);
        stack<int> st;
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adj,vis,st);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();

        }
        return ans;
    }
};