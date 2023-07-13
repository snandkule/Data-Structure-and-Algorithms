class Solution {
public:
//     vector<vector<int>> combine(int n, int k) {
        
//     }
    



void genArr(int n, int k, int curr,  vector<int> &arr, vector<vector<int> > &ans)
{
    if(arr.size()==k){
        ans.push_back(arr);
        return;
    }
    if(curr>n){
        return;
    }
    for(int i = curr;i<=n;i++){
        arr.push_back(i);
        genArr(n,k,i+1,arr,ans);
        arr.pop_back();
    }
    
}

vector<vector<int> > combine(int A, int B) {
    vector<vector<int> > ans;
    vector<int> tmp;
    genArr(A, B, 1, tmp, ans);
    return ans;
}

};