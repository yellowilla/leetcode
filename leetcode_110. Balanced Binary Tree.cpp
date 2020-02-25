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
    bool isBalanced(TreeNode* root) {
        if(root == NULL)// NULL->val会报错
            return true;
        if((TreeHight(root->left) - TreeHight(root->right) <= 1) && (TreeHight(root->left) - TreeHight(root->right) >= -1))
            return isBalanced(root->left) && isBalanced(root->right);
        else
            return false;
    }
    
    int TreeHight(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int l=TreeHight(root->left);
        int r=TreeHight(root->right);
        return  l >= r ? l+1 : r+1;
    }
};


///////////////////////////////////////////////////////////////////////////
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
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
        {
            return true;
        }
        
        int h = 0;
        bool flag = true;
        getHeight(root, h, flag);
        
        return flag;
    }
    
    void getHeight(TreeNode* root, int& h, bool& flag)
    {
        if (root == NULL)
        {
            return;
        }
        
        h = 0;
        int lh = 0, rh = 0;
        if (root->left != NULL)
        {
            getHeight(root->left, lh, flag);
        }
        if (root->right != NULL)
        {
            getHeight(root->right, rh, flag);
        }
        
        h = max(lh, rh) + 1;
        flag = flag && abs(lh - rh) <= 1;
        return;
    }
};
