class Solution {
public:
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        if(n==1){
            ans.push_back(0);
            return ans;
        }
        vector<vector<int>> adj(n, vector<int>());
        vector<int> indegree(n,0);
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            indegree[edges[i][0]]++;
            indegree[edges[i][1]]++;
            
        }
        
        queue<int> q;
        
        for(int i=0;i<n;i++){
            if(indegree[i]==1){
                q.push(i);
                indegree[i]--;
                ans.push_back(i);
            }
        }
        
        
        
        while(!q.empty()){
            
            int n = q.size();
            vector<int> tmp_ans;
            
            for(int i=0;i<n;i++){
                int curr = q.front();
                q.pop();
                
                for(int j=0;j<adj[curr].size();j++){
                    
                    indegree[adj[curr][j]]--;
                    if( indegree[adj[curr][j]] ==1){
                        tmp_ans.push_back(adj[curr][j]);
                        q.push(adj[curr][j]);
                    }
                }
            }
            if(tmp_ans.size()>0){
                ans = tmp_ans;
            }
        }
        
        return ans;
        
    }
};