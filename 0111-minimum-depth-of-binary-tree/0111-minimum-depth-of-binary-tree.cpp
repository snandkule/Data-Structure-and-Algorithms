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
    
    int ans=INT_MAX;
    
    void get_dfs(TreeNode* node, int depth){
        if(node->left==nullptr && node->right==nullptr){
            ans = min(ans,depth);
            return;
        }
        if(node->left!=nullptr)
            get_dfs(node->left,depth+1);
        if(node->right!=nullptr)
            get_dfs(node->right,depth+1);
        return;
        
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        if(root->left==nullptr && root->right==nullptr){
           return 1;
        }
        int leftd=INT_MAX;
        if(root->left!=nullptr){
            leftd = 1 + minDepth(root->left);
        }
        int rightd=INT_MAX;
        if(root->right!=nullptr){
            rightd = 1 + minDepth(root->right);
        }
        return min(leftd,rightd);
//         if(root!=nullptr)
//             get_dfs(root,1);
//         else
//             return 0;
        
//         return ans;
    }
};