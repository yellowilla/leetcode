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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        TreeNode* tmp;
        tmp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(tmp);
        return root;
    }
};


/////////////////////////////////////////////////////////////////////////////
TreeNode* invertTree(TreeNode* root) {
        devide(root);
        
        return root;
    }
    
    void devide(TreeNode*& root)
    {
        if (root == NULL)
        {
            return ;
        }
        
        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        devide(root->left);
        devide(root->right);
        
        return;
    }
