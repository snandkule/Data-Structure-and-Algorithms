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
     int ans ;
 int cnt;
 void traverse(TreeNode* node, int B){
     if(node==NULL || ans!=-1)return;
     // if(node->left==NULL && node->right==NULL){
     //     cnt++;
     //     cout<<cnt<<", node val ="<<node->val<<endl;
     //     if(cnt==B){
     //         ans = node->val;
     //         cout<<"assigning ans to "<<node->val<<endl;
     //         return;
     //     }
     // }
     if(node->left!=NULL)
        traverse(node->left,B);
     cnt++;
     cout<<cnt<<", node val ="<<node->val<<endl;
     if(cnt==B){
        ans = node->val;
        return;
     }
     if(node->right!=NULL)
        traverse(node->right,B);
     
     
 }
    int kthSmallest(TreeNode* root, int k) {
        ans=-1;
    cnt=0;
    traverse(root,k);
    return ans;
    }
};