class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //adj matrix
        vector<vector<int>> adj(numCourses, vector<int>());
        //indegree
        vector<int> indegree(numCourses,0);
        
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        
        vector<int> ans;
        int cnt=0;
        stack<int> st;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                st.push(i);
                indegree[i] = -1;
            }
        }
        
        while(!st.empty()){
            int curr = st.top();
            st.pop();
            ans.push_back(curr);
            // cout<<"abc1 ="<<curr<<endl;
            for(int j=0;j<adj[curr].size();j++){
                indegree[adj[curr][j]]--;
                // cout<<"indegree of "<<adj[curr][j]<<" ="<<curr<<endl;
            }
            for(int i=0;i<numCourses;i++){
                if(indegree[i]==0)
                {
                    st.push(i);
                    // cout<<"pushing in stack = "<<i<<endl;
                    indegree[i] = -1;
                }
            }
            
        }
        if(ans.size()==numCourses)return ans;
        
        vector<int> em;
        return em;
        
    }
};