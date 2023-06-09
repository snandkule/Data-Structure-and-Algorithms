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
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> curr_q;
        
        vector<double> ans;
        curr_q.push(root);
        
        while(!curr_q.empty())
        {
            int sz = curr_q.size();
            double sum=0.0;
            for(int i=0;i<sz;i++){
                TreeNode*  tmp_node = curr_q.front();
                sum+=tmp_node->val;
                if(tmp_node->left!=nullptr)
                    curr_q.push(tmp_node->left);
                if(tmp_node->right!=nullptr)
                    curr_q.push(tmp_node->right);
                curr_q.pop();
            }
           
            ans.push_back(sum/sz);
            
        }
        return ans;
        
       
        
    }
};