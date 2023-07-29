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
    TreeNode* construct(vector<int>& preorder, int &curr, int minv, int maxv){
       if(preorder[curr]<=minv || preorder[curr]>=maxv)return nullptr;
        TreeNode* tmp = new TreeNode(preorder[curr]);
        
        int rval = preorder[curr];
        curr++;
        if(curr<preorder.size())
        tmp->left = construct(preorder,curr, minv,rval);
        if(curr<preorder.size())
        tmp->right = construct(preorder,curr, rval,maxv);
        return tmp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int curr=0;
        if(curr<preorder.size())
        return construct(preorder,curr, INT_MIN,INT_MAX);
        return nullptr;
    }
};