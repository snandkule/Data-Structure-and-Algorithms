class Solution {
public:
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
        
//     }
    
    
void genPerm(vector<int> &A,int cnt, vector<int> arr, vector<int> &visited, vector<vector<int>> &ans){
    cout<<cnt<<",";
    if(cnt==A.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=0;i<A.size();i++){
        if(visited[i]==0){
            arr.push_back(A[i]);
            visited[i]=1;
            genPerm(A,cnt+1, arr, visited, ans);
            arr.pop_back();
            visited[i]=0;
        }
    }
}

vector<vector<int> > permuteUnique(vector<int> &A) {
    
    vector<vector<int> > ans(0);
    if(A.size()<=1){
        ans.push_back(A);
        return ans;
    }
    vector<int> visited(A.size(),0);
    
    vector<int> tmp(0);
    
    genPerm(A, 0, tmp, visited, ans);
    set<vector<int>> s{ans.begin(),ans.end()};
    ans.assign(s.begin(),s.end());
    return ans;
}

};