class Solution {
public:
    int strStr(string A, string B) {
        
         int m = B.length(), n = A.length();
    
    if(m>n || m==0 || n==0)return -1;
    
    for(int i=0;i<=n-m; i++){
        bool found = true;
        for(int j=0;j<m;j++){
            if(A[i+j]!=B[j])found = false;
        }
        if(found){
            return i;
        }
    }
    return -1;
        
    }
};