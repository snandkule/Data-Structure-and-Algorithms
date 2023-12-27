class Solution {
    public boolean canFinish(int n, int[][] prerequisites) {
        
        List<Integer>[] G = new ArrayList[n];
        int[] inDegree = new int[n];
        for(int i=0;i<n;i++){
            List<Integer> t = new ArrayList<>();
            G[i]=t;
            inDegree[i]=0;
        }
        
        for(int i=0;i<prerequisites.length;i++){
            G[prerequisites[i][1]].add(prerequisites[i][0]);
            inDegree[prerequisites[i][0]]++;
        }
        
        List<Integer> bfs = new ArrayList<>();
        for(int i=0;i<n;i++){
            if(inDegree[i]==0)bfs.add(i);
        }
        
        for(int i=0;i<bfs.size();i++){
            
            for(int j=0;j<G[bfs.get(i)].size();j++){
                if(--inDegree[G[bfs.get(i)].get(j)]==0){
                    bfs.add(G[bfs.get(i)].get(j));
                }
            }
        }
         
        return bfs.size()==n;
    }
}





































// ArrayList<Integer>[] G = new ArrayList[n];
//         int[] degree = new int[n];
//         ArrayList<Integer> bfs = new ArrayList();
//         for (int i = 0; i < n; ++i) G[i] = new ArrayList<Integer>();
//         for (int[] e : prerequisites) {
//             G[e[1]].add(e[0]);
//             degree[e[0]]++;
//         }
//         for (int i = 0; i < n; ++i) if (degree[i] == 0) bfs.add(i);
//         for (int i = 0; i < bfs.size(); ++i)
//             for (int j: G[bfs.get(i)])
//                 if (--degree[j] == 0) bfs.add(j);
//         return bfs.size() == n;