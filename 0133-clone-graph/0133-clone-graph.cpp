/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        Node* ans;
        if(node==nullptr){
            cout<<"1"<<endl;
            return ans;
        }
         cout<<"2"<<endl;
        stack<Node*> st;
        map<int,Node*> m1;
        vector<int> visited(101,0);
        
       ans = new Node(node->val);
        st.push(node);
        visited[node->val] = 1;
        m1[node->val]=ans;
        
        while(!st.empty()){
        
            Node* tmp = st.top();
            st.pop();
            
            Node* curr = m1[tmp->val];
            
            curr->val = tmp->val;
            
            vector<Node*> curr_neighbors;
           
            for(int i=0;i< (tmp->neighbors).size();i++){
                
                Node* nbgh;
                if(visited[(tmp->neighbors)[i]->val]==0)
                {
                    nbgh = new Node((tmp->neighbors)[i]->val);
                    st.push((tmp->neighbors)[i]);
                    // cout<<nbgh->val<<endl;
                    visited[nbgh->val] = 1;
                    m1[nbgh->val] = nbgh;
                }else{
                    nbgh = m1[(tmp->neighbors)[i]->val];
                }
                curr_neighbors.push_back(nbgh);
            }
            curr->neighbors = curr_neighbors;
        }
        
        return ans;
        
    }
};