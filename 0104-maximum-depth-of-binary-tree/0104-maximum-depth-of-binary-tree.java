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
    public int maxDepth(TreeNode root) {
        
        if(root==null){
            return 0;
        }
        int ldepth = root.left!=null ? maxDepth(root.left):0;
        int rdepth = root.right!=null ? maxDepth(root.right):0;
        return 1 + Math.max(ldepth, rdepth);
        
    }
}