class Solution {
    boolean ans = false;
    public void checkExist(char[][] board, String word, int curr, int i, int j, boolean[][] visited){
        // if(curr>word.length())return;
        // System.out.println(curr);
        if(curr==word.length()){
            ans = true;
            return;
        }
        if(i<0 || i>=board.length || j<0 || j>=board[0].length || board[i][j]!=word.charAt(curr)|| visited[i][j])return;
        
        
        visited[i][j] = true;
    
        checkExist(board, word, curr+1, i-1, j, visited);

        checkExist(board, word, curr+1, i+1, j, visited);
        
        checkExist(board, word, curr+1, i, j-1, visited);
     
        checkExist(board, word, curr+1, i, j+1, visited);
       
        visited[i][j]=false;
        
    }
    public boolean exist(char[][] board, String word) {
        if(board.length==0 || board[0].length==0)return false;
        int m = board.length, n = board[0].length;
        boolean[][] visited = new boolean[m][n];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans)return true;
                if(word.charAt(0)==board[i][j]){
                    checkExist(board, word, 0, i, j, visited);
                }   
            }
        }
        
        return ans;
    }
}