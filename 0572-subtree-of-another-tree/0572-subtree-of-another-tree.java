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
import java.util.Vector;
class Solution {
    Vector<TreeNode> arr= new Vector<TreeNode>();
    public void getPossibleRoot(TreeNode sbroot, int rootVal){
        if(sbroot==null)return;
        if(sbroot.val==rootVal){
            arr.add(sbroot);
        }
        getPossibleRoot(sbroot.left, rootVal);
        getPossibleRoot(sbroot.right, rootVal);
    }
    
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if(p==null && q==null){
            return true;
        }
        if(p==null || q==null || p.val!=q.val)return false;
      
        if(!isSameTree(p.left,q.left) || !isSameTree(p.right,q.right)){
            return false;
        }
       return true;   
    }
    public boolean isSubtree(TreeNode root, TreeNode subRoot) {
        if(subRoot==null)return true;
        getPossibleRoot(root,subRoot.val);
        for(TreeNode curr: arr){
            if(isSameTree(subRoot, curr)){
                return true;
            }
        }
        return false;
    }
}