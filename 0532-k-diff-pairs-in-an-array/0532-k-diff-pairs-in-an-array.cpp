class Solution {
public:
    int findPairs(vector<int>& A, int B) {

    int ans=0;
    sort(A.begin(),A.end());
    // B= abs(B);
    // for(int i=0; i< A.size();i++){
    //     cout<<A[i]<<",";
    // }
    // cout<<endl;
        unordered_map<int,int>m1;
    int i=0,j=1;
    if(A.size()==1)return 0;
    while(i<A.size() && j<A.size()){
        if(i==j){
            j++;
            continue;
        }
        // cout<<i<<","<<j<<","<<A[i]<<","<<A[j]<<","<<abs(A[i]-A[j])<<endl;
        if(A[j]-A[i]==B){
            if(m1.find(A[i])==m1.end()){
                ans++;
                m1[A[i]] = A[j];
                // m1[A[j]] = A[i];
            }
           
        i++;
        j++;
            continue;}
        
        if(A[j]-A[i]<B)j++;
        else
        i++;
    }

    return ans;
        
    }
};