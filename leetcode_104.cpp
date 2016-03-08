/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth = 0;
        if(root != NULL)
        {
            int leftdep = maxDepth(root -> left);
            int rightdep = maxDepth(root -> right);
            depth = ((leftdep >= rightdep) ? (leftdep + 1) : (rightdep + 1)); 
        }
        return depth;
    }
};
