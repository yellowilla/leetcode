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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(true)
        {
            if((root->val - p->val) * (root->val - q->val) <= 0)
                return root;
            else
                root = root->val - p->val > 0 ? root->left : root->right;
        }
    }
};
