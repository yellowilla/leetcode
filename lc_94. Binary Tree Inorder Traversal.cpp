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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        
        if (root == NULL)
        {
            return res;
        }
        
        devide(root, res);
        
        return res;
    }
    
    void devide(TreeNode* root, vector<int>& res)
    {
        if (root == NULL)
        {
            return ;
        }
        
        devide(root->left, res);
        res.push_back(root->val);
        devide(root->right, res);
        
        return ;
    }
};


///////////////////////////////////////////////////////////////////////////////////
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
    vector<int> inorderTraversal(TreeNode* root) {
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
            cout << tmp->val << endl;
            if (tmp->left != NULL)
            {
                path.push_back(tmp->left);
                tmp->left = NULL;
            }
            else
            {
                res.push_back(tmp->val);
                path.pop_back();
                if (tmp->right != NULL)
                {
                    path.push_back(tmp->right);
                }
            }
        }
        
        return res;
    }
};
