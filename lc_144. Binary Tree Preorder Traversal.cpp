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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        devide(root, res);
        return res;
    }

    void devide(TreeNode*& root, vector<int>& res)
    {
        if (root == NULL)
        {
            return ;
        }

        res.push_back(root->val);
        devide(root->left, res);
        devide(root->right, res);

        return ;
    }
};

////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;

        if (root == NULL)
        {
            return res;
        }

        deque<TreeNode*> path;
        path.push_back(root);
        while (!path.empty())
        {
            TreeNode* tmp = path.back();
            path.pop_back();
            res.push_back(tmp->val);

            if (tmp->right != NULL)
            {
                path.push_back(tmp->right);
            }
            if (tmp->left != NULL)
            {
                path.push_back(tmp->left);
            }
        }

        return res;
    }
};
