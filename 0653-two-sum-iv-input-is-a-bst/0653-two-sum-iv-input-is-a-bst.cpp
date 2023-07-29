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
    bool ans;
    // set<int> s1;
    void ispresent(TreeNode* root, int x){
        TreeNode* tmp=root;
        while(tmp!=nullptr){
            if(tmp->val==x){
                ans = true;
                return;
            }else if(x<tmp->val){
                tmp = tmp->left;
            }else{
                tmp = tmp->right;
            }
        }
    }
    
    void check(TreeNode* root, TreeNode* curr , int k){
        
        if(ans)return;
        if(curr ==nullptr)return;
        if((curr->val)*2!=k)
            ispresent(root, k-curr->val);
        check(root,curr->left,k);
        check(root,curr->right,k);
    }
    
    bool findTarget(TreeNode* root, int k) {
        ans= false;
        check(root,root,k);
        return ans;
    }
};