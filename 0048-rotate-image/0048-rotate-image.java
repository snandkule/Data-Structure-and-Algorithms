class Solution {
    public void rotate(int[][] matrix) {
        int starti=0,startj=0,endi=matrix.length-1,endj=endi;
        
        while(starti<endi){
            
            int i=starti,j=startj, n = endi-starti+1;
            while(i<endi){
                // System.out.println("first = "+matrix[starti][j]);
                //  System.out.println("second = "+ matrix[endi-(i-starti)][startj]);
                //  System.out.println("third = "+matrix[endi][endj-j]);
                //  System.out.println("fourth = "+matrix[i][endj]);
                int tmp = matrix[starti][j];
                matrix[starti][j] = matrix[endi-(i-starti)][startj];
                matrix[endi-i+starti][startj] = matrix[endi][endj-j+startj];
                matrix[endi][endj-j+startj] = matrix[i][endj];
                matrix[i][endj] = tmp;
                i++;
                j++;
            }
            
            starti++;
            startj++;
            endi--;
            endj--;
        }
        
    }
}