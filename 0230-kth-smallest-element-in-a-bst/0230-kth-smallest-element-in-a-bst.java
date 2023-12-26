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
    int ans=-1;
    int curr = 0;
    void traverse(TreeNode root, int k){
        if(root==null)return;
        traverse(root.left,k);
        // System.out.println("val ="+root.val);
        curr++;
        if(curr==k){
            ans = root.val;
            return;
        }
        traverse(root.right,k);
          
    }
    public int kthSmallest(TreeNode root, int k) {
        traverse(root,k);
        return ans;
        
    }
}