class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& A) {
            vector<int> ans(A.size(),-1);
    if(A.size()==0)return ans;
    // stack<int> st;
    for(int i=0;i<A.size();i++){
        
        // while(!st.empty() && st.top()>=A[i]){
        //     st.pop();
        // }
        // if(!st.empty()){
        //     ans[i] = st.top();
        // }
        // st.push(A[i]);
        
        int nextg = A[i];
        for(int j=i+1;j<A.size();j++){
            if(A[j]>nextg){
                nextg = A[j];
                break;
            }
        }
        if(nextg!=A[i]){
            ans[i]=nextg;
            continue;
        }
        for(int j=0;j<i;j++){
             if(A[j]>A[i]){
                ans[i]= A[j];
                break;
            }
        }
        
    }
    return ans;
        
    }
};