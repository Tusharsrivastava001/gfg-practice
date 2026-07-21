class Solution {
  public:
  
    void bfs(int start,std::vector<std::vector<int>> &adj,std::vector<int> &v){
        std::vector<bool> vis(adj.size(),false);
        std::queue<int> q;
        q.push(start);
        vis[start] = true; 
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            
            v.push_back(node);
            for(auto ele : adj[node]){
                if(!vis[ele]){
                    vis[ele]=true;
                    q.push(ele);
                    
                }
            }
        }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        //here we have to do level order travsersal man
        std::vector<int> v;
        bfs(0,adj,v);
        return v;
        
    }
};