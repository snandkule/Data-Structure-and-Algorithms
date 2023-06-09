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
    int maxDepth(TreeNode* root) {
        
        if(root==nullptr)return 0;
        
        if(root->left==nullptr && root->right==nullptr)return 1;
        
        int leftd = INT_MIN;
        if(root->left!=nullptr){
            leftd = maxDepth(root->left)+1;
        }
        if(root->right!=nullptr){
            return max(leftd, maxDepth(root->right)+1);
        }
        return leftd;
        // return max(leftd,rightd);
        
    }
};