class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        // List<char[]> l1 = new ArrayList<>();
        // boolean[] visited = new boolean[strs.length];
        // for(String s: strs){
        //     char[] schararr = s.toCharArray();
        //     Arrays.sort(schararr);
        //     l1.add(schararr);
        // }
        // List<List<String>> ans = new ArrayList<>();
        // for(int i=0; i< strs.length;i++){
        //     if(visited[i]){
        //         continue;
        //     }
        //     List<String> list1 = new ArrayList<>();
        //     list1.add(strs[i]);
        //     visited[i]=true;
        //     for(int j=i+1;j<strs.length;j++){
        //         if(visited[j]==false){
        //             if(Arrays.equals(l1.get(i),l1.get(j))){
        //                 visited[j]=true;
        //                 list1.add(strs[j]);
        //             }
        //         }
        //     }
        //     ans.add(list1);
        // }
        // return ans;
        
        Map<String, List<String>> m1 = new HashMap<>();

        for(String s: strs){
            char[] schar = new char[26];
            for(char c:s.toCharArray()){
                schar[c-'a']++;
            }
            if(!m1.containsKey(String.valueOf(schar))){
                m1.put(String.valueOf(schar), new ArrayList<>());
            }
            m1.get(String.valueOf(schar)).add(s);
        }
        return new ArrayList<>(m1.values());
    }
}