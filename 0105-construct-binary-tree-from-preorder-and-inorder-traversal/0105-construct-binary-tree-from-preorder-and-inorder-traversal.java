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
    public TreeNode construct(int[] preorder, int[] inorder,int currpre, int startin, int endin){
        if(startin>endin)return null;
        if(startin==endin){
            return new TreeNode(inorder[startin]);
        }
        TreeNode t = new TreeNode(preorder[currpre]);
        
        int mid=-1;
        for(int i=startin;i<=endin;i++){
            if(preorder[currpre]==inorder[i]){
                mid=i;
                break;
            }
        }
        if(mid==-1)return null;
        t.left = construct(preorder, inorder, currpre+1, startin, mid-1);
        t.right = construct(preorder, inorder, currpre+(mid-startin)+1, mid+1, endin);
        return t;
    }
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        return construct(preorder, inorder, 0, 0, inorder.length-1);
    }
}