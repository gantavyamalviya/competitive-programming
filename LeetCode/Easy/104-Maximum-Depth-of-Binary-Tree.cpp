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

int maxd=0;

void dfs(TreeNode* root, int d)
{
    if(!root->left and !root->right) 
    {
        maxd = max(maxd,d);
    }
    
    else {
        if(root->left)
            dfs(root->left,d+1);
        if(root->right)
            dfs(root->right,d+1);
    }
    
}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        maxd = INT_MIN;
        dfs(root,1);
        return maxd;
    }
};
