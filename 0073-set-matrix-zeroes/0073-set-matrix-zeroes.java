class Solution {
    
    void setM(int[][] matrix, int r, int c){
        for(int j=0;j<matrix[0].length;j++){
            if(matrix[r][j]==0){
                matrix[r][j]=0;
            }else{
                matrix[r][j]=-10000;
            }
        }
       
        for(int i=0;i<matrix.length;i++){
            if(matrix[i][c]==0){
                matrix[i][c]=0;
            }else{
                matrix[i][c]=-10000;
            }
        }
        matrix[r][c]=-10000;
    }
    boolean isRowSet(int[][] matrix, int r){
        for(int j=0;j<matrix[0].length;j++){
            if(matrix[r][j]!=-10000 && matrix[r][j]!=0)return false;
        }
        return true;
    }
    boolean isColSet(int[][] matrix, int c){
        for(int i=0;i<matrix.length;i++){
            if(matrix[i][c]!=-10000 && matrix[i][c]!=0)return false;
        }
        return true;
    }
    public void setZeroes(int[][] matrix) {
        int m = matrix.length, n = matrix[0].length;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){          
                if(matrix[i][j]==0){
                    setM(matrix,i,j);
                    matrix[i][j]=-10000;
                } 
            }
        }  
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isRowSet(matrix,i)){
                    for(int k=0;k<n;k++){
                        matrix[i][k]=0;
                    }
                }
                if(isColSet(matrix,j)){
                    for(int k=0;k<m;k++){
                        matrix[k][j]=0;
                    }
                }
            }
        }
    }
    
}