// Time Complexity : O(n)
// Space Complexity : O(H) where H is the height of binary tree

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
    int ans=0;
    void preorder(TreeNode* root, int max) {
        if(root == NULL)
            return;
        if(root->val >= max) {
            ans++;
            max = root->val;
        }
        preorder(root->left,max);
        preorder(root->right,max);
    }
    int goodNodes(TreeNode* root) {
        preorder(root, INT_MIN);
        return ans;
    }
};
