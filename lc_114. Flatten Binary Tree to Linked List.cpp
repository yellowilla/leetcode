/ @lc code=start
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
    void flatten(TreeNode* root) {
        if (root == NULL)
        {
            return ;
        }

        TreeNode* nr = root;
        deque<TreeNode*> path;
        path.push_back(root);
        while (!path.empty())
        {
            TreeNode* cur = path.back();
            path.pop_back();
            if (cur->right != NULL)
            {
                path.push_back(cur->right);
            }
            if (cur->left != NULL)
            {
                path.push_back(cur->left);
            }
            if (cur != root)
            {
                nr->left = NULL;
                nr->right = cur;
                nr = cur;
            }
        }

        return ;
    }
};
