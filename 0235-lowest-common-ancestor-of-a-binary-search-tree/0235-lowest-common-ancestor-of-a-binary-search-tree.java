/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        
        TreeNode curr = root;
        TreeNode prev = null;
        if(p.val==root.val || q.val==root.val)return root;
        
        while(root!=null){
            if((p.val==root.val || q.val==root.val) || (root.val>p.val && root.val<q.val) 
                || (root.val<p.val && root.val>q.val))return root;
            if(root.val>p.val && root.val>q.val){
                prev = root;
                root = root.left;
            }else{
                prev = root;
                root = root.right;
            }
        }
        return prev;
    }
}