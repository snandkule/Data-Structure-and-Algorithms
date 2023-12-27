class Solution {
    
    public int get_visited_cnt( boolean[] visited){
        int cnt=0;
        for(int i=0;i<visited.length;i++){
            if(visited[i])cnt++;
        }
        return cnt;
    }
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        
        List<Integer>[] arr = new ArrayList[numCourses];
        
        for(int i=0;i<numCourses;i++){
            List<Integer> t = new ArrayList<>();
            arr[i] =t;
        }
        for(int i=0;i<prerequisites.length;i++){
            arr[prerequisites[i][0]].add(prerequisites[i][1]);
        }
        
        boolean[] visited = new boolean[numCourses];
        
        while(get_visited_cnt(visited)!=numCourses){
            
            List<Integer> curr = new ArrayList<>();
            
            for(int i=0;i<numCourses;i++){
            
                if(arr[i].size()==0 && visited[i]==false){
                    curr.add(i);
                    visited[i]= true;
                }
            }
            
            if(curr.size()==0){
                return false;
            }
            
            for(int i=0;i<curr.size();i++){
                 for(int j=0;j<numCourses;j++){
                     arr[j].remove(curr.get(i));
                 }
            }
            
        }
        return true;
        
    }
}