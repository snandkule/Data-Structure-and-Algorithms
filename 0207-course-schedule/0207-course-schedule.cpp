class Solution {
public:
    
    bool dfs(vector<vector<int>>& adj, vector<int>& visited, int curr){
        
        if(visited[curr]==1)return true;
        if(visited[curr]==2)return false;
        for(int i=0;i<adj[curr].size();i++){
            visited[curr] = 1;
            if(visited[adj[curr][i]]==1)return true;
            bool res = dfs(adj, visited, adj[curr][i] );
            if(res)return true;  
      
        }
        visited[curr] = 2;
        
        return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& prereq) {
        
        vector<vector<int>> adj(n+1,vector<int>());
        
        for(int i=0;i<prereq.size();i++){
            adj[prereq[i][0]].push_back(prereq[i][1]);
        }
        vector<int> visited(n+1,false);
        for(int i=0;i<n;i++){
            if(visited[i]!=2){
                bool res = dfs(adj,visited,i);
                // cout<<i<<"="<<res<<endl;
                if(res)return false;
            }   
        }
        return true;
        
    }
};