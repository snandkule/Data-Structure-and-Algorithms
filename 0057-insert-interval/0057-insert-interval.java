class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        if(intervals.length==0){
             int[][] ans = new int[intervals.length+1][2];
            ans[0]=newInterval;
            return ans;
        }
        
        if(newInterval[1]<intervals[0][0] || newInterval[0]>intervals[intervals.length-1][1]){
             int[][] ans = new int[intervals.length+1][2];
        
            if(newInterval[1]<intervals[0][0]){
                ans[0]=newInterval;
                for(int i=0;i<intervals.length;i++){
                    ans[i+1]=intervals[i];
                }
            }else{
                for(int i=0;i<intervals.length;i++){
                    ans[i]=intervals[i];
                }
                ans[intervals.length] = newInterval;
            }
            return ans;
        
        }
        int start=-1;
        int start_index=-1;
        
        for(int i=0;i<intervals.length;i++){
            if(newInterval[0]<intervals[i][0]){
                start = newInterval[0];
                start_index=i;
                break;
            }else if(newInterval[0]>=intervals[i][0] && newInterval[0]<=intervals[i][1]){
                start = intervals[i][0];
                start_index=i;
                break;
            }
        }
        if(start_index==-1){
            start = newInterval[0];
            start_index = intervals.length;
        }
        // System.out.println("start = "+start);
        // System.out.println("start_index ="+start_index);
        int end=-1;
        int end_index=-1;
        
        for(int i=start_index;i<intervals.length;i++){
            if(newInterval[1]<intervals[i][0]){
                end = newInterval[1];
                end_index=i-1;
                break;
            }else if(newInterval[1]>=intervals[i][0] && newInterval[1]<=intervals[i][1]){
                end = intervals[i][1];
                end_index=i;
                break;
            }
        }
        if(end_index==-1){
            end = newInterval[1];
            end_index = intervals.length-1;
        }
        // System.out.println("end = "+end);
        // System.out.println("end_index ="+end_index);
        int sz =1;
        if(start_index>0){
            sz+=start_index;
        }
        if(end_index<intervals.length-1){
            sz+=intervals.length-1-end_index;
        }
        // System.out.println("sz = "+sz);
        
        int[][] ans = new int[sz][2];
        int j=0;
        for(int i=0;i<start_index;i++){
            ans[j]=intervals[i];
            j++;
        }
        ans[j][0]=start;
        ans[j][1]=end;
        j++;
        for(int i=end_index+1;i<intervals.length;i++){
            ans[j] = intervals[i];
            j++;
        }
        return ans;
        
    }
}