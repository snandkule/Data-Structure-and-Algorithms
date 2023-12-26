/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    Map<Integer, Node> m1 = new HashMap<>();
    boolean[] visited = new boolean[101];
    public Node cloneGraph(Node node) {
        if(node==null)return null;
        if(visited[node.val])return m1.get(node.val);
        
        Node curr = new Node(node.val);
        visited[node.val] = true;
         m1.put(curr.val, curr);
        for(int i=0;i< node.neighbors.size();i++){
          
            if(visited[node.neighbors.get(i).val]){
                curr.neighbors.add(m1.get(node.neighbors.get(i).val));
            }else{
                 m1.put(node.neighbors.get(i).val, cloneGraph(node.neighbors.get(i)));
                 curr.neighbors.add(m1.get(node.neighbors.get(i).val));
                // visited[node.neighbors.get(i).val] = true;
            }
           // curr.neighbors.add(nbr);
        }
        
       
        return curr;
        
    }
}