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
    
    public boolean check(TreeNode root, long high, long low){
        if(root==null)return true;
        if((root.val<=low || root.val>=high) || 
           !check(root.left, root.val,low) || 
           !check(root.right, high,root.val))return false;
        
        return true;
        
    }
    public boolean isValidBST(TreeNode root) {
        if(root.left==null && root.right==null)return true;
        return check(root, Long.MAX_VALUE, Long.MIN_VALUE);
    }
}