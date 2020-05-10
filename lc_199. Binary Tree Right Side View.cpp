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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;

        if (root == NULL)
        {
            return res;
        }

        deque<TreeNode*> path;
        path.push_back(root);
        int n1 = 1, n2 = 1;
        while (!path.empty())
        {
            n1 = n2;
            n2 = 0;
            while (n1 > 0)
            {
                TreeNode* tmp = path.front();
                
                if (n1 == 1)
                {
                    res.push_back(tmp->val);
                }   
                
                if (tmp->left != NULL)
                {
                    path.push_back(tmp->left);
                    n2++;
                }
                if (tmp->right != NULL)
                {
                    path.push_back(tmp->right);
                    n2++;
                }

                path.pop_front();
                n1--;
            }
        }

        return res;
    }
};
