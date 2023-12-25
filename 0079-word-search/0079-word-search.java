class Solution {
    boolean ans = false;
    boolean[][] visited;
    String word;
    public void checkExist(char[][] board,  int curr, int i, int j ){
       
        // System.out.println(curr);
        if(curr==word.length()){
            ans = true;
            return;
        }
        if(i<0 || i>=board.length || j<0 || j>=board[0].length || board[i][j]!=word.charAt(curr)|| visited[i][j])return;
        
        
        visited[i][j] = true;
    
        checkExist(board, curr+1, i-1, j);

        checkExist(board, curr+1, i+1, j);
        
        checkExist(board, curr+1, i, j-1);
     
        checkExist(board, curr+1, i, j+1);
       
        visited[i][j]=false;
        
    }
    public boolean exist(char[][] board, String word1) {
        if(board.length==0 || board[0].length==0)return false;
        int m = board.length, n = board[0].length;
        visited = new boolean[m][n];
        word = word1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans)return true;
                if(word.charAt(0)==board[i][j]){
                    checkExist(board, 0, i, j);
                }   
            }
        }
        
        return ans;
    }
}