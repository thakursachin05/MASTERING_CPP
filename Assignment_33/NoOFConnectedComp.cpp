void dfs(int src, vector<vector<int>> &adj,vector<int> &vis){
    vis[src] = 1;
    for(auto x : adj[src]){
        if(!vis[x]){
            dfs(x,adj,vis);
        }
    }
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> vis(A+1);
    vector<vector<int>> adj(A+1);
    
    for(auto e : B){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    
    int count = 0;
    for(int i=1;i<=A;i++){
        if(!vis[i]){
            count++;
            dfs(i,adj,vis);
        }    
    }
    return count;
    
}
