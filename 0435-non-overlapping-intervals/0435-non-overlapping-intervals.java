class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        if(intervals.length<=1)return 0;
        
        
        Arrays.sort(intervals, (a,b)-> Integer.compare(a[0],b[0]));
        int ans=0;
        int curr=0;
        for(int i=1;i<intervals.length;i++){
            
            if(intervals[curr][1]<=intervals[i][0]){
                curr=i;
            }else{
               if(intervals[curr][1]>=intervals[i][1]){
                   curr=i;
               }
                ans++;
            }
        }
        
        
        return ans;
        
    }
}