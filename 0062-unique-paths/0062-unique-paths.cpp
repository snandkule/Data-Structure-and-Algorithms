class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> arr(m,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            arr[m-1][i]=1;
        }
        
        for(int j=0;j<m;j++){
            arr[j][n-1]=1;
        }
       
        
        for(int i=m-2;i>=0;i--){
            for(int j = n-2;j>=0;j--){
                arr[i][j] = arr[i][j+1] + arr[i+1][j];
            }
        }
        
        return arr[0][0];
        
        
    }
};