class Solution {
    public int uniquePaths(int m, int n) {
        int[][] arr = new int[m+1][n+1];
        
        for(int i=0;i<m;i++)arr[i][0]=0;
        
        for(int i=0;i<n;i++)arr[0][i]=0;
        arr[1][1]=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                arr[i][j] = arr[i][j]+arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[m][n];
        
    }
}