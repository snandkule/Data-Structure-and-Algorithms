class Solution {
public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//     }
    
vector<vector<int>> ans;
// set<vector<int>> s1;
void getsum(vector<int> &A, vector<int> arr, int i, long long s, int B){
    if(i>=A.size()||s>=B){
        if(s==B){
            // if(s1.find(arr)!=s1.end){
            ans.push_back(arr); 
            // s1.insert(arr);   
            // }
        }
        return;
    }
    getsum(A,arr,i+1,s,B);
    arr.push_back(A[i]);
    s+=A[i];
    getsum(A,arr,i,s,B);
    getsum(A,arr,i+1,s,B);
}

vector<vector<int> > combinationSum(vector<int> &A, int B) {
    
    sort(A.begin(),A.end());
    vector<vector<int>> tmp(0);
    ans = tmp;
    vector<int> arr(0);
    getsum(A,arr,0,0,B);
    set<vector<int>> s{ans.begin(),ans.end()};
ans.assign(s.begin(),s.end());
    sort(ans.begin(),ans.end(),[](const vector<int> &a1, const vector<int> &a2)->bool{
        int i=0,j=0;
        
        while(i<a1.size() && j<a2.size()){
            if(a1[i]<a2[j])return true;
            else if(a1[i]>a2[j])return false;
            i++;j++;
        }
        if(i>=a1.size())return true;
        return false;
    });
    return ans;
    
}
};