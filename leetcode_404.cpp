/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 ////////////////////////////////////////////////////////////
 //所有“左叶子”的val的和
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        int lt=0, rt=0;
        if(root->left)
        {
            TreeNode* tmp=root->left;
            if((!tmp->left)&&(!tmp->right))
                lt=tmp->val;
                //lt=sumOfLeftLeaves(root->left)+root->left->val;
            else
                lt=sumOfLeftLeaves(root->left);
        }
        if(root->right)
            rt=sumOfLeftLeaves(root->right);
        return lt+rt;
    }
};


/////////////////////////////////////////
//二叉树所有“左节点”的val的和
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        int lt=0, rt=0;
        if(root->left)
            lt=sumOfLeftLeaves(root->left)+root->left->val;
        if(root->right)
            rt=sumOfLeftLeaves(root->right);
        return lt+rt;
    }
};
