// Question link : https://leetcode.com/problems/path-sum-ii/
// Time Complexity :
// Space Complexity :
// Concept Used : Reursion, Depth-First Search, backtracking, Binary Tree

// approach : It is the easiest emplement of DFS algorithm. Iterate to each node and Check sum of each leaf. If the the sum is equal to the targetSum then stor it in ans vector. 

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
    vector<vector<int>> ans;
     void findpath(TreeNode* root, vector<int> &path,int targetSum, int currsum)
    {
        if(!root){
            return;
        }
        currsum+=root->val;
        path.push_back(root->val);
        if(currsum == targetSum and !root->left and !root->right){
            ans.push_back(path);
        }
        findpath(root->left,path, targetSum, currsum);
        findpath(root->right,path, targetSum, currsum);
        path.pop_back();
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        findpath(root,path,targetSum,0);
        return ans;
    }
    
   
};
