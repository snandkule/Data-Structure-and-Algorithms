class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        
        int starti=0,endi=matrix.length-1,startj=0,endj=matrix[0].length-1;
        List<Integer> ans = new ArrayList<>();
        while(starti<=endi && startj<=endj){
            
            for(int j=startj;j<=endj;j++){
                ans.add(matrix[starti][j]);
            }
            for(int i=starti+1;i<=endi;i++){
                ans.add(matrix[i][endj]);
            }
            if(starti!=endi)
            for(int j=endj-1;j>=startj;j--){
                ans.add(matrix[endi][j]);
            }
            if(startj!=endj)
            for(int i=endi-1;i>starti;i--){
                ans.add(matrix[i][startj]);
            }
            starti++;endi--;startj++;endj--;
        }
        return ans;
        
    }
}