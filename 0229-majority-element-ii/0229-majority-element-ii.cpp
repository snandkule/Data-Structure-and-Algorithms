class Solution {
public:
    vector<int> majorityElement(vector<int>& A) {
        map<int,int> m1;
        vector<int> ans;
    for(int i=0;i<A.size();i++){
        if(m1.find(A[i])==m1.end()){
            m1[A[i]]=1;
        }else{
            m1[A[i]]++;
        }
        // cout<<"ceil is "<<ceil((double)A.size()/2)<<endl;
        // if(m1[A[i]]>=ceil((double)A.size()/2))return A[i];
    }
        for(auto iter: m1){
            if(iter.second>floor((double)A.size()/3)){
                ans.push_back(iter.first);
            }
        }
    return ans;
    }
};