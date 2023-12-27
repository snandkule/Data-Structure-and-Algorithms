class Solution {
    public void dfs(int[][] arr, int[][] heights, int i, int j){
        if(i<0 || i>=heights.length || j<0 || j>=heights[0].length){
            return;
        }
        if(arr[i][j]!=1)return;
        
        if(i>0 && arr[i-1][j]!=1 && heights[i][j]<=heights[i-1][j]){
            arr[i-1][j]=1;
            dfs(arr,heights,i-1,j);
        }
        if(i<heights.length-1 && arr[i+1][j]!=1 && heights[i][j]<=heights[i+1][j]){
            arr[i+1][j]=1;
            dfs(arr,heights,i+1,j);
        }
        
        if(j>0 && arr[i][j-1]!=1 && heights[i][j]<=heights[i][j-1]){
            arr[i][j-1]=1;
            dfs(arr,heights,i,j-1);
        }
        if(j<heights[0].length-1 && arr[i][j+1]!=1 && heights[i][j]<=heights[i][j+1]){
            arr[i][j+1]=1;
            dfs(arr,heights,i,j+1);
        }
        
    }
    public List<List<Integer>> pacificAtlantic(int[][] heights) {
        List<List<Integer>> ans = new ArrayList<>();
        if(heights==null || heights[0]==null)return ans;
        int m = heights.length, n = heights[0].length;
        
        int[][] pacific = new int[m][n];
        int[][] atlantic = new int[m][n]; 
        
        for(int i=0;i<m;i++){
            pacific[i][0]=1;
            atlantic[i][n-1] = 1;
        }
        for(int i=0;i<n;i++){
            pacific[0][i]=1;
            atlantic[m-1][i]=1;
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                    dfs(pacific, heights,i,j);
              
                    dfs(atlantic, heights,i,j);
                
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j]==1 && atlantic[i][j]==1){
                    List<Integer> t = new ArrayList<>();
                    t.add(i);
                    t.add(j);
                    ans.add(t);
                }
            }
        }
        return ans;
        
    
        
    }
}