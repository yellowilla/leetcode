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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL)
        {
            return res;
        }

        deque<TreeNode*> path;
        TreeNode* tmp = root;
        while (tmp != NULL || !path.empty())
        {
            if (tmp != NULL)
            {
                path.push_back(tmp);
                tmp = tmp->left;
            }
            else
            {
                tmp = path.back();
                path.pop_back();
                res.push_back(tmp->val);
                tmp = tmp->right;
            }
            
        }

        return res;
    }
};
