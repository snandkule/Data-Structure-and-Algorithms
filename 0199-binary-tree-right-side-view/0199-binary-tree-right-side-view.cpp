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
    int getdepth(TreeNode* root){
        if(root==NULL)return 0;
        int lh = getdepth(root->left)+1;
        int rh = getdepth(root->right)+1;
        return max(lh,rh);
    }
    void getright(TreeNode* node, vector<int> &ans, int id){
        if(node==nullptr)return;
        ans[id] = node->val;
        getright(node->left,ans,id+1);
        getright(node->right,ans,id+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int h = getdepth(root);
        vector<int> ans(h,0);
        if(root==NULL)return ans;
        
        getright(root, ans, 0);
        return ans;
        
        
    }
};