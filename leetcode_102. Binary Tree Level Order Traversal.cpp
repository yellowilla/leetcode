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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if (root == NULL)
        {
            return res;
        }
        
        deque<TreeNode*> path;
        path.push_back(root);
        int n1 = 1, n2 = 1;
        while (!path.empty())
        {
            vector<int> eachr;
            n1 = n2;
            n2 = 0;
            while(n1 > 0)
            {
                TreeNode* tmp = path.front();
                if (tmp->left != NULL)
                {
                    n2++;
                    path.push_back(tmp->left);
                }
                if (tmp->right != NULL)
                {
                    n2++;
                    path.push_back(tmp->right);
                }
                path.pop_front();
                eachr.push_back(tmp->val);
                int i = eachr.back();
                cout << i << endl;
                n1--;
            }
            res.push_back(eachr);
        }

        return res;
    }
};
