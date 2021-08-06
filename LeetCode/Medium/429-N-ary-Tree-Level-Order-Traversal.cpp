// Question Link : https://leetcode.com/problems/n-ary-tree-level-order-traversal/
// Time Complexity : O(n)
// Space Complexity : O(n)
// Concept Used : Tree, BFS


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root){
            return {};
        }
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;

            int n=q.size();
            while(n--)
            {
                Node *curr=q.front();
                q.pop();
                level.push_back(curr->val);
                for(Node *next : curr->children)
                {
                   q.push(next);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};
