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
 bool check(TreeNode* l,TreeNode* r ){
     if(l==NULL || r==NULL)return l==r;
     if(l->val != r->val){
         return false;
     }
   
     if(!check(l->left, r->right))return false;
     return check(l->right, r->left);
 }
 
    bool isSymmetric(TreeNode* root) {
          return check(root->left,root->right);
    }
};