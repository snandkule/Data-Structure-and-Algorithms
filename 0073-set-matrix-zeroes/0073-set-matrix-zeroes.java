class Solution {
    
    void setM(int[][] matrix, int r, int c){
        
        for(int j=0;j<=c;j++){
            matrix[r][j]=0;
        }
        for(int j=c+1;j<matrix[0].length;j++){
            // if(matrix[r][j]==0){
            //     matrix[r][j]=-1;
            // }else{
                matrix[r][j]=0;
            // }
        }
        for(int i=0;i<=r;i++){
            matrix[i][c]=0;
        }
        for(int i=r+1;i<matrix.length;i++){
            // if(matrix[i][c]==0){
            //     matrix[i][c]=-1;
            // }else{
                matrix[i][c]=0;
            // }
        }
    }
    public void setZeroes(int[][] matrix) {
        int m = matrix.length, n = matrix[0].length;
//         for(int i=0;i<m;i++){
//             int isz=0;
//             for(int j=0;j<n;j++){
                
//                 if(isz==0 && matrix[i][j]==0){
//                     isz=1;
//                     setM(matrix,i,j);
//                 }
//                 if(isz==1 && matrix[i][j]==-1){
//                     setM(matrix,i,j);
//                 }
//             }
//         }
        int[] rows = new int[m];
        int[] cols = new int[n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            if(rows[i]==1){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
        
        for(int j=0;j<n;j++){
            if(cols[j]==1){
                for(int i=0;i<m;i++){
                    matrix[i][j]=0;
                }
            }
        }
        
        
        
    }
}