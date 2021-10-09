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

bool dfs(TreeNode* left, TreeNode* right)
{
    if(left==NULL and right==NULL) return true;
    if(left==NULL or right==NULL) return false;
    return (left->val == right->val) and dfs(left->left,right->right) and dfs(left->right,right->left);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return dfs(root->left,root->right);
    }
};
