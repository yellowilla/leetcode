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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
            return 1;
        if((p != NULL && q != NULL) && (p->val == q->val))//p,q中有一个为NULL时，执行p->val == q->val 出错
        {
            if(isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
                return 1;
        }
        return 0;
    }
};
