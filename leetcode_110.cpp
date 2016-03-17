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
