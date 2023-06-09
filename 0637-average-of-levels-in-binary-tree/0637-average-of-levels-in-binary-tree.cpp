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
        
        long double sum=0;
        
        curr_q.push(root);
        
        while(!curr_q.empty())
        {
            sum=0;
            queue<TreeNode*> next_q;
            double cnt=0;
            while(!curr_q.empty())
            {
                TreeNode*  tmp_node = curr_q.front();
                sum+=tmp_node->val;
                if(tmp_node->left!=nullptr)
                    next_q.push(tmp_node->left);
                if(tmp_node->right!=nullptr)
                    next_q.push(tmp_node->right);
                curr_q.pop();
                cnt++;
            }
            ans.push_back(sum/cnt);
            curr_q = next_q;
            
        }
        return ans;
        
       
        
    }
};