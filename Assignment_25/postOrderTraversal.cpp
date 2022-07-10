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
    void happyDebug(TreeNode* root,vector<int> &ans){
        if(root==nullptr) return;
        
          
        happyDebug(root->left,ans);
        happyDebug(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       
        vector<int> ans;
        happyDebug(root,ans);
        return ans;
        
    }
};