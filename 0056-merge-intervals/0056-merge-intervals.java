class Solution {
    public int[][] merge(int[][] intervals) {
        
        List<int[]> ans = new ArrayList<>();
        
        if(intervals.length<=1)return intervals;
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        // Arrays.sort(intervals);
        int[] newInterval = intervals[0];
        
        for(int i=1;i<intervals.length;i++){
            
            if(newInterval[1]<intervals[i][0]){
                ans.add(newInterval);
                newInterval = intervals[i];
            }else if(newInterval[0]>intervals[i][1]){
                ans.add(intervals[i]);
            }else{
                newInterval[0] = Math.min(newInterval[0], intervals[i][0]);
                newInterval[1] = Math.max(newInterval[1], intervals[i][1]);
            }
        }
        ans.add(newInterval);
        
        // return ans.toArray();
        return ans.toArray(new int[ans.size()][]);
        
    }
}