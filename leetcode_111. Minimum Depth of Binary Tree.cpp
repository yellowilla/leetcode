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

        int h = 0;
        int lh, rh;
        if (root->left == NULL || root->right == NULL)
        {
            lh = minDepth(root->left);
            rh = minDepth(root->right);
            h = lh > rh ? lh + 1 : rh + 1;    
        }
        else 
        {
            lh = minDepth(root->left);
            rh = minDepth(root->right);
            h = lh < rh ? lh + 1 : rh + 1;
        }

        return h;
    }
};
