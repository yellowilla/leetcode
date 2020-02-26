
/**后序遍历非递归
*   后序遍历即为“左右根”，反过来是“根右左”
*   与先序遍历“根左右”遍历方法一样，
*   只是左右子节点的先后入栈顺序换换，
*   得到“根右左”后再调转方向即可
*/
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
