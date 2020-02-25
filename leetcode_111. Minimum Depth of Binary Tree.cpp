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
    int minDepth(TreeNode* root) {
        if (root == NULL)
        {
            return 0;
        }
        
        int h;
        if (root->left == NULL || root->right == NULL)
        {
            h = max(minDepth(root->left), minDepth(root->right)) + 1;
        }
        else
        {
            h = min(minDepth(root->left), minDepth(root->right)) + 1;
        }
        
        return h;
    }
};
