class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        
        if (root == NULL)
        {
            return res;
        }
        
        deque<int> ans;
        deque<TreeNode*> path;
        path.push_back(root);
        while (!path.empty())
        {
            TreeNode* tmp = path.back();
            path.pop_back();
            ans.push_back(tmp->val);
            
            if (tmp->left != NULL)
            {
                path.push_back(tmp->left);
            }
            if (tmp->right != NULL)
            {
                path.push_back(tmp->right);
            }
        }
        
        int len = ans.size();
        for (int i = 0; i < len; i++)
        {
            res.push_back(ans.back());
            ans.pop_back();
        }
        
        return res;
    }
};
