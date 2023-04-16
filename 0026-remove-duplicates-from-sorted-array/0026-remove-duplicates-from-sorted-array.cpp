class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        
//        vector<int>::iterator it;
    
//     it = unique(nums.begin(), nums.end());
            
//     return distance(nums.begin(),it);
          
    int ans=1, var = A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]!=var){
            A[ans-1] = var;
            ans++;
            var = A[i];
        }
    }
    A[ans-1]= var;
    return ans;
        
    }
};