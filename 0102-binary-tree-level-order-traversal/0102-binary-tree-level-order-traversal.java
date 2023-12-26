/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        
        List<List<Integer>> ans = new ArrayList<>();
        if(root==null)return ans;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        TreeNode curr;
        while(!q.isEmpty()){
            int n = q.size();
            List<Integer> currLevelArr = new ArrayList<>();
            for(int i=0;i<n;i++){
                curr = q.poll();
                currLevelArr.add(curr.val);
                if(curr.left!=null)q.add(curr.left);
                if(curr.right!=null)q.add(curr.right);
            }
            ans.add(currLevelArr);
        }
        return ans;
        
    }
}