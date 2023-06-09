/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool pathsum(TreeNode* root, int targetSum, int currentSum){
        if(root->left==nullptr && root->right==nullptr){
            
            if(currentSum+(root->val)==targetSum)return true;
            return false;
        }
        currentSum = currentSum+(root->val);
        bool isleft = false;
        if(root->left!=nullptr){
            isleft = pathsum(root->left, targetSum, currentSum);
        }
        bool isright = false;
        if(root->right!=nullptr){
            isright = pathsum(root->right, targetSum, currentSum);
        }
        if(isleft||isright)return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        return pathsum(root, targetSum,0);
        
    }
};