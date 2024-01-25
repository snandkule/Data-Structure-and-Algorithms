class Solution {
    public int minProcessingTime(List<Integer> processorTime, List<Integer> tasks) {
        Collections.sort(processorTime);
        Collections.sort(tasks);
        int ans=processorTime.get(0)+tasks.get(0);
        int n=tasks.size()-1;
        for(int i=0;i<processorTime.size();i++){
            for(int j=0;j<4;j++){
                ans = Math.max(ans,processorTime.get(i)+tasks.get(n) );
                n--;
            }
        }
        return ans;
        
    }
}