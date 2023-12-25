class Solution {
    boolean ans = false;
    public void checkExist(char[][] board, String word, StringBuilder curr, int i, int j, boolean[][] visited){
        if(curr.toString().length()>word.length())return;
        // System.out.println(curr);
        if(curr.toString().equals(word)){
            ans = true;
            return;
        }
        if(i<0 || i>=board.length || j<0 || j>=board[0].length || visited[i][j])return;
        if(board[i][j]!=word.charAt(curr.length()))return;
        curr.append(board[i][j]);
        visited[i][j] = true;
    
        checkExist(board, word, curr, i-1, j, visited);

        checkExist(board, word, curr, i+1, j, visited);
        
        checkExist(board, word, curr, i, j-1, visited);
     
        checkExist(board, word, curr, i, j+1, visited);
        curr.deleteCharAt(curr.length() - 1);
        visited[i][j]=false;
        
    }
    public boolean exist(char[][] board, String word) {
        if(board.length==0 || board[0].length==0)return false;
        int m = board.length, n = board[0].length;
        boolean[][] visited = new boolean[board.length][board[0].length];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans)return true;
                if(word.charAt(0)==board[i][j]){
                    visited[i][j]=true;
                    checkExist(board, word, new StringBuilder(""+board[i][j]), i+1, j, visited);
                    checkExist(board, word, new StringBuilder(""+board[i][j]), i-1, j, visited);
                    checkExist(board, word, new StringBuilder(""+board[i][j]), i, j-1, visited);
                    checkExist(board, word, new StringBuilder(""+board[i][j]), i, j+1, visited);
                    visited[i][j]=false;
                }
                
            }
        }
        return ans;
    }
}