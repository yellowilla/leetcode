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
        if ( (root->val - p->val) * (root->val - q->val) <= 0)
        { 
            return root;
        }
        else if (root->val > p->val && root->val > q->val)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        else
        {
            return lowestCommonAncestor(root->right, p, q);
        }
    }
};


///////////////////////////////////////////////////////////////////////
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = root;
        
        deque<TreeNode*> path_p = pathToN(root, p);
        deque<TreeNode*> path_q = pathToN(root, q);
        
        while(path_p[0] == path_q[0])
        {
            res = path_p[0];
            path_p.pop_front();
            path_q.pop_front();
        }
        
        return res;
    }
    
    deque<TreeNode*> pathToN(TreeNode* root, TreeNode* n)
    {
        deque<TreeNode*> res;
        
        if (root == n)
        {
            res.push_back(root);
            return res;
        }
        
        while(root != n)
        {
            res.push_back(root);
            if (root->val > n->val)
            { 
                root = root->left;
            }
            else if (root->val < n->val)
            {
                root = root->right;
            }
            else
            {
                root = n;
            }
        }
        
        res.push_back(root);
        return res;
    }
};
