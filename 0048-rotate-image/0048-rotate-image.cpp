class Solution {
public:
    void rotate(vector<vector<int>>& A) {

         int n = A.size();
    
    vector<vector<int>> B(n,vector<int>(n,0));
    
    for(int i = 0; i<n; i++){
        int col = n-1-i;
        for(int j=0;j<n;j++){
            
            B[j][col] = A[i][j];
        }
    }
   A= B;
    
        
    }
};